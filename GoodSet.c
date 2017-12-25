#include<stdio.h>
#include<conio.h>
int main(){
	int T;
	scanf("%d",&T);

	if(T>=1){
		while(T--){
			int n,i,j,arr[12];
			scanf("%d",&n);
			printf("\n");
			if(n>=1&&n<=10){
				for(i=5,j=0;j<n;i=i+4,j++)
				arr[j]=i;
				
				for(i=0;i<j;i++)
				printf("%d ",arr[i]);
	
			}
			printf("\n");
		}
	}
	getch();
	return 0;
	
}
