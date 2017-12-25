#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
	
	
	int arr[100],n,i,max,min;
	
	printf("Enter how many numbers you want to enter:\t");
	scanf("%d",&n);
	printf("\n\nEnter the numbers now:\n");
	
	
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
    max=arr[0];
    min=arr[0];
    
    for(i=0;i<n-1;i++)
    {
    	if(arr[i+1]>max)
    	{
    		max=arr[i+1];
		}
		
	    else if(arr[i+1]<min)
		min=arr[i+1];
	}
	
	printf("max=%d",max);
    printf("min=%d",min);
	printf("\n\n");
	
	printf("Minimum positions\tMaximum Positions\n\n");
	
	for (i=0;i<n;i++){
		if (max==arr[i])
		printf("\t%d ",i+1);
	}
		printf("\n");
		
		else if(min==arr[i]){
		
		printf("\t%d ",i+1);
	}
	
}
	




getch();
return 0;


	
}

