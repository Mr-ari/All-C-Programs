#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	
	for (i=1; i<=3; i++)
	{
		for (j=1; j<=3; j++)
		{
			if(i+j%2==0)
			printf(" ");
			
			else;
			printf("*");
		}
		printf("\n");
	}
	
	grtch();
	
}
