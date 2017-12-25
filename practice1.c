#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int main()
{
		int p,q,i,j,choice,l;
	char str[50],stra[50],c;
	
	printf("Enter your text please:\t");
	gets(str);

	l=strlen(str);




	printf("Enter the position from where you want to extract:\t");
		scanf("%d",&p);
		printf("\nEnter the number of words you want to extract:\t");
		scanf("%d",&q);
		
		if(l>p+q-1){
		
		for (i=p-1;i<=p+q-1;i++)
		{
		while(j<i)
		
		{
		
			stra[j]=str[i];
			j++;
		//	stra[j]='\0';		
		}
	    
		}
	    }
		else
		printf("Extraction is not possible");
	
	printf("\nYour extraxted text is:\n%s",stra);
	
	return 0;
}
