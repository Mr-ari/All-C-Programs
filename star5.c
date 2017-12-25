
#include<stdio.h>
#include<conio.h>

main()

{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		if(i==1||i==5)     /*this if is for first and last line ...... */
		{
			printf("  *\n");
		}
		else
		{
			if(i%2==0)
			{
				for(j=1;j<=5;j++)
				{
					if(j%2!=0)
					printf(" ");
					
					else
					printf("*");
					
				}
			printf("\n");	
			}
			
			
			else
			{
				for(j=1;j<=5;j++)
				{
					if(j%2!=0)
					printf("*");
					
					else
					printf(" ");
			    }
			printf("\n");    
			}
			
		}
	}
	
	getch();
}

/*.................................................................................................................Mr.ari..........................*/
