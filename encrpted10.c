#include<stdio.h>
#include<conio.h>
#include<string.h>

//void change(char [],char[],int[],int);
void encrypt(char [],char []);

int main(){
	
	char s1[20],s2[20];
	
	printf("Enter the first string:\t");
	scanf("%s",s1);
	printf("\n\nEnter the second string:\t");
	scanf("%s",s2);
	
	encrypt(s1,s2);
	
	getch();
	return 0;
	
}


void encrypt(char s1[],char s2[]){
	
	int len1=strlen(s1);
	int len2=strlen(s2);
	int i,m,j=0,y=0,x=0,count1[10],count2[10]; char temp1[20],temp2[20];
	
	for(i=0;i<len1;i++){
			
			if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U'){
			
			temp1[j]=s1[i];			
			s1[i]='*';
			count1[j]=i;
			printf("\n%c\t%d\t%d",temp1[j],count1[j],j);
			j++;
			x++;			
			}
							
	}
	
	//change(s1,temp1,count1,x);
	
	/*for(i=0,j=0;i<len2;i++){
			
			if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u'||s2[i]=='A'||s2[i]=='E'||s2[i]=='I'||s2[i]=='O'||s2[i]=='U'){
			
			temp2[j]=s2[i];			
			s2[i]='*';
			count2[j]=i;
			printf("\n%c\t%d",temp2[j],count2[j]);
			j++;
			y++;			
			}
	}
	
	*/
	
	
	
	int temp;
	for(i=0,j=0;i<=x;i++,j++){
		
		int temp=count1[i];	
		s1[temp]=temp2[j];
				
	}
	
	//	for(i=0,j=0;i<=y;i++,j++){
	//	
	//	temp=count2[i];
	//	
	//	s2[temp]=temp1[j];
	//			
	//	}
	
	
puts(s1);
//puts(s2);
	
}




