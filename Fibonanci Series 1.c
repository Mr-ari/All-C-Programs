/*................................A programe by Mr.Arijit Ghosh.............................................*/

/*...............................To display the fibonanci series............................................*/ 

#include<stdio.h>
int main()

{
	int first,second,temp,end;
	
	printf("\t\t\t\tFibonanci Series\n");
	printf("\t\t\t\t_________________\n");
	
	printf("Enter that Number upto you want to see the Fibonanci series\n ");            /*Taking the user input*/ 
	scanf("%d",&end);
	
	first=0;
	second=1;
	
	while(second<=end)
	{
		temp=second;
		second=first+second;
		first=temp;
		
		printf("%d\n",second);
	}
	
	return 0;
}
