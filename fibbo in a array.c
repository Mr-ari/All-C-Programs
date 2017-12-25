#include<stdio.h>
#include<conio.h>
int fib(int);
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,num,i,j,check=0,arr[100];
		scanf("%d",&n);
		for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		for(i=0;i<n;i++){
			num=0;
		for(j=1;arr[i]>=fib(j);j++){
			if(arr[i]==fib(j))
			num++;
		}
			if(num!=0)
			 check++; 
		}
		
		printf("%d\n",check);
	}
	getch();
	return 0;
	
}
int fib(int num){
	if(num==0)
	return 0;
	else if(num==1)
	return 1;
	else
	return fib(num-1)+fib(num-2);
}

