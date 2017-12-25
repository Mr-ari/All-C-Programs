#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
	
	char str[20]="Hello Hi";
	char stra[20]="hsdis nds";
	char temp[20];
	int m;
	
	//strcpy(temp,str);
	//strncat(str,stra,3);
	m=strstr(str,stra);
	puts(str);
	puts(stra);

    printf("%d",m);
	getch();
	
    return 0;
	
	
}
