#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
	int T;
	scanf("%d",&T);
	if(T>=1&&T<=3000){
		while(T--){
			int i=0,j,n,arr[2]={0};
			char str[50];
			scanf("%s",str);
			while(i<strlen(str)){
			
				if(str[i]=='U'){
					n=i+1;
					for(j=i+1;j<strlen(str)&&j==n;j++){
					if(str[j]=='U')
					n++;
					}
					arr[0]++;
					i=n;					
				}
				else if(str[i]=='D'){
					n=i+1;
					for(j=i+1;j<strlen(str)&&j==n;j++){
					if(str[j]=='D')
					n++;
					}
					arr[1]++;
					i=n;					
				}
				
				else
				printf("Not possible");
				
			}
			if(arr[0]>arr[1])
			printf("\n%d",arr[1]);
			else
			printf("\n%d",arr[0]);
			
		}
	}
	getch();
	return 0;
}

