#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	
	int choice;
	char ch,spl;
	FILE *fp,*fp1;
	
	fp=fopen("main.txt","w");
	printf("Enter the text in the main.txt file,press tab to finish:\n");
	
	while((ch=getchar())!='\t'){
		putc(ch,fp);
	}
	fclose(fp);
	
	printf("\n-------------------------------------------->");
	printf("Enter As Per Your Choice<------------------------------------------------\n\n");
	printf("\t1>Copy the contain of the file into another file.\n\t2>Insert a new line of text in the first file.\n\t3>Delete all occurence of a specific crarecter from the text\n\t4>Display the total vowel and number of words in each file.");

	scanf("%d",&choice);
	
	switch(choice){
		
		case 1:
			fp=fopen("main.txt","r");
			fp1=fopen("Dummy.txt","w");
			printf("\nCopying..........");
			printf("\n\nThe content of the second file is \n\n");
			while(!feof(fp)){
				
				ch=getc(fp);
				putc(ch,fp1);
				printf("%c",ch);
			}
			fclose(fp1);
			fclose(fp);
			break;
		
		case 2:
			fp=fopen("main.txt","a");
			printf("\nNow enter the u want to add, press tab to finish:\t");
			
			while((ch=getchar())!='\t'){
				
				putc(ch,fp);
			}
			fclose(fp);
			printf("Here is Your New Text:\n\n");
			fopen("main.txt","r");
			while(!feof(fp)){
				ch=getc(fp);
				printf("%c",ch);
			}
			
			fclose(fp);			
		break;
		
		case 3:
			fp=fopen("main.txt","r");
			fp1=fopen("Dummy.txt","w");
			
			printf("Enter the char u want to delete:\t");
		
		
			scanf("%c",&spl);
			
			
			printf("\n\nAfter delete the carecter :\n\n");
			while(!feof(fp)){
				
				ch=getc(fp);
				if(ch!=spl){
					putc(ch,fp1);
				
				printf("%c",ch);
			    }
			}
			fclose(fp1);
			fclose(fp);
			break;
		
	}
	
	

getch();
return 0;


}
