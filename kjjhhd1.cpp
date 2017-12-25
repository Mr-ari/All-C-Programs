#include<stdio.h>
#include<conio.h>

int main()

{
	int i,j,n,N=0;
	
	printf("Enter that intiger you want to check if it is prime number r not:\t");
	scanf("%d",&n);
	
	for (i=2;i<n;i++)
	{
		for(j=2;j<i;j++)
		if(i%j!=0)
		{printf("%d ",i);
		}
		
		
	}
	

	
	
		
	
	getch();
}
