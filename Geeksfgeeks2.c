#include<stdio.h>
int main(){
	int k,t,y=0;
	scanf("%d",&t);
	int ansf[100];
	if(t>=1&&t<=100){
		while(t--){
			int ans=0,m,n,x,j,i,arr1[100000],arr2[100000];
			scanf("%d",&m);
			scanf("%d",&n);
			for(i=0;i<m;i++){
				scanf("%d",&arr1[i]);
			}
			for(i=0;i<n;i++){
				scanf("%d",&arr2[i]);
			}
			scanf("%d",&x);
			for(i=0;i<=m;i++){
				for(j=0;j<n;j++){
					if((arr1[i]+arr2[j])==x)
					ans++;
					
				}
			}
		//printf("%d")
		ansf[y]=ans;
		y++;
		}
		
		for(k=0;k<y;k++){
		printf("%d\n",ansf[k]);
	}
	}
		return 0;
	}
	
	

