#include<stdio.h>
#include<string.h>
#include<conio.h>
#define MAX 20

void reverse(int *,int);

int main(){
	
	int in[MAX], *ptr,i,n,*ptrf1;
	
	printf("how many no. u want to enter ?\t");
	scanf("%d",&n);
	
	printf("\nenter the numbers one by one:\n");
	
	for(i=0;i<n;i++)
		scanf("%d",&in[i]);
	
	ptr=&in[0];
	 
	reverse(*ptr,n);
	
	printf("%d",*ptrf1);


	getch ();
	return 0;
}

void reverse(int *ptr,int n){
	
	int final[MAX],i, *ptrf;
	
	for(i=n-1;i>=0;i--){
		
		final[(n-1)-4]=*(ptr+(n-1));
	}
	printf("%d",final[0]);
	ptrf=&final[0];
	
	//return *ptrf;
}
