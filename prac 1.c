#include<stdio.h>
#include<conio.h>

double XN(int arr[],int x,int n);
int main(){

 int arr[20],n,x,i;
printf("Enter n:\n");
scanf("%d",&n);
printf("Enter values of a\n");
for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
}

printf("Enter the valude for x:\t");
scanf("%d",&x);

 
 printf("%15.2lf",XN(arr,x,n));
  getch();
    return 0;
}

double XN(int arr[],int x,int n){

double pw;

if(n==1)
return arr[0];

else
pw=XN(arr,x,n-1)*x+arr[n-1];
	
return pw;

}
