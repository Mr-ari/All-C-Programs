#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	
	char str[15];
	int i,j;
	
	printf("Enter the string:");
	scanf("%s",str);
	
	for(i=0;i<strlen(str);i++){
		for(j=0;j<=i;j++){
			printf("%c",str[j]);
		}
		printf("|");
		printf("\n");
	}	
	printf("-------------------------------------------------------\n");
	
		for(i=strlen(str)-1;i>=0;i--){
		for(j=0;j<=i;j++){
			printf("%c",str[j]);
		}
		printf("|");
		printf("\n");
	}	
	
	
	for(i=0;i<strlen(str);i++){
		for(j=0;j<=i;j++){
			if(i==j)
			printf("C");
			else
			printf(" ");
		}
		printf("|");
		printf("\n");
	}	
	printf("-------------------------------------------------------\n");
	
		for(i=strlen(str)-1;i>=0;i--){
		for(j=0;j<=i;j++){
			if(i==j)
			printf("C");
			else
			printf(" ");
		}
		printf("|");
		printf("\n");
	}
	
	getch();
	return 0;
	
}
