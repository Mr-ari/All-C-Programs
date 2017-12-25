#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()

{
	
	int i,len=0,vowel=0,cons=0,space=0,spl=0,k=0;
	
	char str[100],c,check;
	

	
	printf("Enter The Sentence : \t");
	gets(str);
	
	len=strlen(str);
	
	for(i=0;i<=len;i++)
	{
		c=tolower(str[i]);
		
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
		vowel++;
		
		else if (c>'a'&&c<='z')
		cons++;
		
		else if (c==' ')
		space++;
		
		else
		spl++;
		
	}	
		printf("\n\n Total number of vowel is %d\n\n Total number of consonant is %d\n\n Total number of space is %d\n\n Total number of spcial charecter is %d \n\n Total number of words in the sentece is %d\n\n",vowel,cons,space,spl,space+1);
		
	printf("Now Enter the letter you want to match : \t");
	scanf("%c",&check);
	
	for (i=0;i<=len;i++)
	{
		if (str[i]==check)
		k++;
		
		
	}
		printf("So your inputed letter present in the given sentence %d times",k);
		
		
		getch();
		return 0;
}
