#include<stdio.h>
#include<conio.h>
#include<string.h>

void inverse_insert(int* , char* ,int,int);

int main(){
	int arr[20],*ptri,n,i;
	char str[20],*ptrc;
	
	printf("Enter how many intigers you want to input:\t");
	scanf("%d",&n);
	
	printf("\nEnter the intigers now:\t");
	for(i=0;i<n;i++){
		
		scanf("%d",&arr[i]);
	}
	printf("Enter the string now:\t");

		scanf("%s",str);
		
	int len=strlen(str);	
	inverse_insert(&arr,&str,n,len);
	
	getch();
	return 0;		
}

void inverse_insert(int *ptri,char *ptrc,int n,int len){
	

	int i,j;
	int middle=n/2;
	printf("\n");
	for(i=n-1;i>=0;i--){
		if(i==middle){
			printf("%d",*(ptri+i));
			for(j=0;j<len;j++)
			printf("%c",*(ptrc+j));
		}
		
		else
		printf("%d",*(ptri+i));
		
	}	

			
}





