#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,num,num2,check_num,remin,result=0;
	
	printf("Enter the number you want to check:\t");
	scanf("%d",&num);
	printf("\n");
	
	{
	
	check_num=num;
	while(num!=0)
	{
		num=num/10;
		++n;
		
	}
	num2=check_num;
	while(check_num!=0)
	{
		remin=check_num%10;
		result+=pow(remin,n);
		check_num=check_num/10;
		
	}
	printf("%d\n",result);
	
	if(result==num2)
	printf("The number is a Angstrom number");
	
	else
	printf("This is not a Angstrom number !");
	
	
	
	getch();
	
	
    }
	
}
