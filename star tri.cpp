#include<stdio.h>
#include<conio.h>

int main()

{
	int i,j,k,n;
	
	printf("Enter any no : \t");
	scanf("%d",&n);
	printf("\n\n\n");
	for(i=1;i<n+1;i++)
	{
		for (k=n;k>i;k--)
		{
		printf(" ");
		}
		
		for(j=1;j<=(2*i)-1;j++)
		{
			printf("*");
			
		}
		printf("\n");
	}
	
	/*for the lower case*/
	
	for(i=n-1;i>=1;i--)
	{
		for(k=n;k>i;k--)
		{
			printf(" ");
		}
		
		for(j=1;j<=(2*i)-1;j++)
		{
			printf("*");
			
		}
		printf("\n");
	}
	getch();
}
