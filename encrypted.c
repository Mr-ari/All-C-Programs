
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	
	char a[20],b[20],temp,dump[20],i,j=0,l1,l2;
	
	printf("Enter the first string\n");
	gets(a);
	printf("Enter the second string\n");
	gets(b);
	
	l1=strlen(a);
	l2=strlen(b);
	
	
	for(i=0;i<l1;i++){
		
		if(a[i]=="a"||a[i]=="e"||a[i]=="i"||a[i]=="o"||a[i]=="u"||a[i]=="A"||a[i]=="E"||a[i]=="I"||a[i]=="O"||a[i]=="U"){
			
			while(j<l2){
				if(b[j]=="a"||b[j]=="e"||b[j]=="i"||b[j]=="o"||b[j]=="u"||b[j]=="A"||b[j]=="E"||b[j]=="I"||b[j]=="O"||b[j]=="U"){
					
					temp=a[i];
					a[i]=b[j];
					b[j]=temp;
				j++;	
				}
				else
				j=0;
			}
		}
		
	}
	
}
