//Snakes, Mongooses and the Ultimate Election 
//codechef programme
//*******************************************************************************************************

#include<stdio.h>
#include<conio.h>
#include<string.h>

void Winner(char []);
int main(void){
	
	int T;
	scanf("%d",&T);
	while(T--){
		
		char str[100],final[100];
		scanf("%s",str);
		int i=0,j=0;
		while (i<strlen(str)){
			
			if (str[i]=='s'){
				if(str[i+1]=='m'){
					final[j]='m';
					j++;
					i=i+2;
				}
				else{
					final[j]= str[i];
					j++;
					i++;
				}
			}
			
			else if (str[i]=='m'){
				
				if(str[i+1]=='s'){
					final[j]='m';
					j++;
					i=i+2;
				}
				else{
				
				final[j]=str[i];
				j++;
				i++;
				}
			}
		}
		final[j]='\0';
		puts(final);
		Winner(final);
	}
	
	
}

void Winner (char str[]){
	int i,s=0,m=0;
	for (i=0;i<strlen(str);i++){
		if (str[i]=='s')
		s++;
		else if (str[i]== 'm')
		m++;
	}
	if (s==m)
	printf("tie\n");
	else if(s>m)
	printf("snakes\n");
	else 
	printf("mongooses\n");
	}




