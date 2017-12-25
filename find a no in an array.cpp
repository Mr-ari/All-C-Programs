#include<stdio.h>
int main()

{
	int list[8],a,t,i;
	
	printf("Enter the number into the list\n");
	
	for(i=0;i<8;i++)
	{
		scanf("%d",&list[i]);
		
	}
	
	printf("Enter the number you want to search:\n");
	
	scanf("%d",&a);
	
	t=0;
	for(i=0;i<8;i++)
	{
		if(list[i]==a)
		{
			t++;
		}
		if(t==0)
		{
			printf("No such Number is present in the list");
			
		}
		else
		{
			printf("Number is present %d times in the list");
			
		}
		return 0;
	
		
		
	}
	
}
