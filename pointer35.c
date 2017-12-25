#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	
	char str[50],rev[50],*ptr,*ptr1;
	
	int len,i,j,words=1,count[20]={0},max;
	
	printf("Enter the string: ");
	gets(str);
	
	len=strlen(str);
	ptr=str;
	
	/*for count the number of words*/
	
	for(i=0;i<len;i++,ptr++){
		if(*ptr==' ')
		words++;
	}
	printf("\n\nThe total words present in the string is %d",words);
	
	/*reverse the string*/
	ptr=str;
	
	ptr1=ptr+len;
			
	printf("\nreverse of the string is :\t");
	for(i=0;i<=len;i++,ptr1--){
			printf("\n%c",*ptr1);
	}
	
	/*count the largest word*/
	j=0;
	
	for(i=0;i<len;i++,ptr++){
		if(*ptr!=' ')
		count[j]++;
		
		else
		j++;		
	}
	
	max=count[0];
	
	for(i=1;i<j;i++){
		if(count[i]>max)
		max=count[i];
	
	}
	printf("\n\nThe longest word is the lenght of %d",max);
	
	/*find the biggest word*/
	
	ptr=str;
	
	for(i=0;i<=len;i++){
		if(*ptr=='\0'){
			
		}
	}
	getch();
	return 0;
	
}
