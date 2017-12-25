#include<stdio.h>
#include<conio.h>

int main()

{
	int bin,remin,j=1,dec=0;
	
	printf("Enter the binary number you want to convert to decimal:\t");
	scanf("%d",&bin);
	
	while(bin!=0)
	{
		remin=bin%10;
		
		dec=dec+remin*j;
		
		j=j*2;
		
		bin=bin/10;
		
	}
	printf("In Decimal number it is \t%d",dec);
	
	getch();
}
