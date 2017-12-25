#include<stdio.h>
#include<conio.h>

int main()

{
	int bin,dec,remin;
	
	printf("Enter the decimal no :\t");
	
	scanf("%d",&dec);
	
	while(dec!=0)
	{
		remin=dec%2;
		
		printf("%d",remin);
		
		dec=dec/2;
	}
	
	getch();
}
