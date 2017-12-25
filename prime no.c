#include<stdio.h>
#include<conio.h>

int main()

{
	int i,n,N=0;
	
	printf("Enter that intiger you want to check if it is prime number r not:\t");
	scanf("%d",&n);
	
	for (i=2;i<n;i++)
	{
		if(n%i==0)
		N++;
		
	}
	

	
		if(N==0)
		{
			printf("\nThis is a prime number\n");
			
			
			
		}
		else 
		{
			printf("this is not a prime number");
		}
		
	
	getch();
}
