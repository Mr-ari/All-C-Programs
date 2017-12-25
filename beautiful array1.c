#include<stdio.h>
#include<conio.h>
int check(int arr[100], int , int );
int main(){
	int t;
	scanf("%d",&t);
	if(t>=1&&t<=1000000){
		while(t--){
			int i,j,n,arr[100],num=1,k;
			scanf("%d",&n);
			for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
			
			for(i=0;i<n-1&&num!=0;i++)
				for(j=0; j<n && num!=0;j++){
					if(i !=j){					
					k=arr[i]*arr[j];
					num = check( arr,n,k );
				}
				}
			
			if(num==0)
			printf("Yes\n");
			else
			printf("No\n");	
			
		}
	}
	getch();
	return 0;
}

int check (int arr[100],int n,int product ){
	
	int i;
	for (i=0;i<n;i++){
		if(arr[i]==product)
		return 0;
	}
	return 1;
}



