#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(int argc,char* argv[]){
	
	//gets(argv);
	char temp[20];
	int i,j,F;
	
	if(argc==1)
	printf("please use a command line argument:)");
	
	else{
		
		for (i = 0; i < argc  ; i++)
    {
        for (j = i + 1; i < argc; j++)
        {
            if (strcmp(argv[i], argv[j]) > 0)
            {
                strcpy(temp, argv[i]);
                strcpy(argv[i], argv[j]);
                strcpy(argv[j], temp);
            }
        }
    }
	
    }
	printf("-----------------------------------------------------------------------------------------\n\n\t\t\tSorted Names are \n\n----------------------------------------------------------------------------");
		
	for(i=0;i<argc;i++)
	printf("%s\n",argv[i]);
			
	
		
		getch();
		return 0;
	
	
	
}
