#include<stdio.h>
#include<conio.h>
int main(){
	int t;
	scanf("%d",&t);
	if(t>=1&&t<=1000000){
		while(t--){
			int i,j,n,arr[100],num=2,k;
			scanf("%d",&n);
			for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
			
			for(i=0;i<n-1&&num!=0;i++)
				for(j=i+1;j<n&&num!=0;j++)
					for(k=i;k<n&&num!=0;k++)
					if(arr[i]*arr[j]==arr[k])
					num=0;
				
			
			if(num==0)
			printf("Yes\n");
			else
			printf("No\n");	
			
		}
	}
	getch();
	return 0;
}
