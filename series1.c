#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n;
	float sum,f;
	
	printf ("Enter the value of 'n':\t");
	scanf("%d",&n);
	printf("\n\n");
	
	sum=0.0;
	for(i=1;i<=n;i++)
	{
		f=1/i;
		sum=sum+f;
		
		if(i!=n)
		{
			printf("(1/%d)+ ",i);
			
		}
		else
		{
			printf("(1/%d)=",i);
		}
	}
	
	printf("\t%10.2f",sum);
	
	getch();
}
