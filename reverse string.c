#include<stdio.h>
#include<string.h>
#include<conio.h> 
int main() {
   char str[100], temp;
   int i, j = 0;
 
   printf("\nEnter the string :");
   gets(str);
 
   i = 0;
   j = strlen(str) - 1;
 
   while (i < j) {
   	
   	if(j==strlen(str)-1 && str[j]=='.'||str[j]==','||str[j]=='?'||str[j]=='!'||str[j]=='-'){
		   i++; 
		   j--;
	   }
	   
	  else if(str[j]=='.'||str[j]==','||str[j]=='?'||str[j]=='!'||str[j]=='-'){
		temp = str[i];
      	str[i] = str[j-1];
      	str[j] = temp;
      	i++;
      	j=j-2;
	   
	   }  		
   	else{
   	  temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
  }
   }
 
 	puts(str);  
   getch();
   return 0;
}
