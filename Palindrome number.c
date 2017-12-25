#include<stdio.h>
#include<conio.h>

int main()
{
	int n,origin_no,rev_no=0,remin;
	
	printf("Enter the number you want to check:\t");
	scanf("%d",&n);
	printf("\n\n\n");
	
	origin_no=n;
	
	while(n!=0)
	{
		remin=n%10;
		rev_no=rev_no*10+remin;
		n=n/10;
		
	}
	
	
	if(origin_no==rev_no)
	printf("The nuber is a palindrome number");
	
	else
	printf("The number is not a palindrome number");
	
	getch();
	
	
}

