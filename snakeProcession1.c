#include<stdio.h>
#include<conio.h>
#include<stdio.h>

int check_HT(char ch);
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char str[50];
		int i,m,n,no=0,j=-1,check=0;
		
		scanf("%s",str);
		
		for (i=j+1;i<strlen(str)&&check==0;i++){
			if(str[i]=='T'||str[i]=='H'){
				printf("%d",i);
				m=check_HT(str[i]);
				n=2;
				for(j=i+1;j<strlen(str);j++){
					if(str[j]!='.'){
					//	printf("%d",j);
						n=check_HT(str[j]);
						break;
						
					}	
				}
				
				if(m==n)
				check++;
		
			}
			
			else if(str[i]!='.')
			no++;
		}
		
		
		if (check==0&&no==0)
		printf("valid");
		else
		printf("invalid");
		
		
		
	}
}

int check_HT(char ch){
	
	if(ch=='H')
		return 1;
	else if(ch=='T')
		return 0;	
	else
		return 2;	
}
