#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	
	int p,q,i,j,choice,l;
	char str[200],stra[200],c,temp;
	
	printf("Enter your text please:\t");
	gets(str);

	l=strlen(str);
	
	printf("\n\n---------->Select your choice please<-------------");
	printf("\n\t1.Exract a portion from the text\n\t2.Count the occurence of a particular word\n\t3.Reverse the text\n\t4.Delete all the vowels from it\n\t5.Search for the numeric digits in it\n\n");
	
	scanf("%d",&choice);
	
	switch(choice)
	{
	
	case 1:
		
		
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
				
		}
	    
		}
		stra[j]='\0';
	    }
		else
		printf("Extraction is not possible");
	
	printf("\nYour extraxted text is:\n\n%s",stra);
		
		break;
	
	case 2:
		printf("Sorry this programe is under-constraction");
		break;
	
	case 3:
		
		i = 0;
        j = strlen(str) - 1;
 
  		 while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
  }
  printf("\n");
  for(i=0,j=0;i<strlen(str);i++){
  	
  	if(i!=0&&(str[i]=='.'||str[i]==','||str[i]=='!'||str[i]=='/'||str[i]==';'||str[i]==':'||str[i]=='"'||str[i]=='?')){
  		p++;
	  }
	  
	  else{
	  	stra[j]=str[i];
	  	j++;
	  	
	  }
	  	  
  }
  printf("The Text after reverse will be:");
  //printf("%d",strlen(stra));
  printf("\n");
  for(i=0;i<=strlen(stra);i++){
  if(i==0&&(stra[i]=='.'||stra[i]==','||stra[i]=='!'||stra[i]=='/'||stra[i]==';'||stra[i]==':')){
  	stra[strlen(stra)]=stra[0];
  	}
  	
  	else{
  		if(i==1)
  		printf("%c",toupper(stra[i]));
  		else
  		printf("%c",stra[i]);
	  }
  		
  }
      
	    break;
	
	
	case 4:
		j=0;p=0;
		for(i=0;i<l;i++){
			
			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
				
				p++;
			}
			else{
				stra[j]=str[i];
				j++;
			}				
		}
		if(p==l){
			printf("\nThe text contains all vowels");
		}
		else{
		printf("The text without vowel is \n\n %s",stra);	
		}
		
		break;
		
		
		case 5:
			p=0;
			for (i=0;i<l;i++){
				
				if(str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'||str[i]=='0'){
					
					p++;
					printf("The numeric number present in the position %d\n",i+1);
				}
				else if(p==0&&i==l-1){
					printf("No numeric number present in that text.Thank You\n");
				}										
				
			}
			break;
			
			
		
	}
	
	
	
	
	
	getch();
	
	return 0;
}
