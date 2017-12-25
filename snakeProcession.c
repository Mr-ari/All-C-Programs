#include<stdio.h>
#include<string.h>
int main(){
	int R;
	scanf("%d",&R);
	while(R--){
	
		int i,arr[100],j=0,k,L;
		
		char str[100];
		scanf("%s",str);
		
		for(i=0;i<strlen(str);i++){
			if(str[i]!='.'&&(str[i]=='H'||str[i]=='T')){
				arr[j]=i;
			//	printf("%d",arr[j]);
				j++;
			}
			
		}
		int n=0;
		if(j==0)
		printf("Valid\n");
		else if(j%2!=0)
		printf("Invalid\n");
		else{
			for(i=0;i<j-1;i=i+2){
			k=arr[i+1];
			if(str[j]==str[k])
			n++;
			}
		if(n==0)
		printf("Valid\n");
		else
		printf("Invalid\n");
       }
       }
    

		return 0;
}

