/**********************************Sum Of the arrays*******************************************/

#include<stdio.h>
int main()

{
	int no[5],value,total,i;

	printf("Enter 5 Real Numbers:\n");

	for(i=0;i<5;i++)
	{

		scanf("%d",&no[i]);
		
	}

	total=0;
	for(i=0;i<5;i++)
    {
        total=total+no[i];

    }
    printf ("\n");
    for(i=0;i<5;i++)
       
		printf("x[%2d]= %5.2d\n",i+1,no[i]);
	
    printf("\nTotal=%2d\n",total);

    return 0;
}

