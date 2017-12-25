#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(int argc,char* argv[]){
	
	
	char temp[20];
	int i,j,F;
	
	if(argc==1)
	printf("please use a command line argument:)");
	
	else{
		
		for(int i=1;i<argc;i++){
			for(j=i+1;j<argc;j++){
			
			F=strcmp(argv[i],argv[j]);
				
				if(F<0){
				
					strcpy(temp,argv[i]);
					strcpy(argv[i],argv[j]);
					strcpy(argv[j],temp);
					
				}
			}
		
		}
	printf("-----------------------------------------------------------------------------------------\n\n\t\t\t\tSorted Names are \n\n------------------------------------------------------------------------------------------");
				
	}
	
	
	printf("\n");	
	for(i=argc-1;i>=1;i--)
	printf("%s\n",argv[i]);
			
	
		
		getch();
		return 0;
	
	
	
}
