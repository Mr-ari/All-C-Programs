#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()

{
	
	int i,len=0,vowel=0,cons=0,space=0;
	
	char str[100],c;
	
	clrscr();
	
	printf("Enter The Sentence : \t");
	gets(str);
	
	len=strlen(str);
	
	for(i=0;i<=len;i++)
	{
		c=tolower(str[i]);
		
		if(c=="a"||c=="e"||c=="i"||c=="o"||c=="u")
		vowel++;
	}	
		printf("%d",vowel);
		
		getch();
		return 0;
}
