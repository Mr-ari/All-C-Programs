#include<stdio.h>
#include<conio.h>
#include"primo.c"
#undef TEST 


int prime(int);
int main(){
	
	int i,n,j;
	
	printf("Enter how many twin prime pairs you want to print:\t");
	scanf("%d",&n);
	printf("\nHere is your twin primes :\n\n");
	
	for(i=1,j=i+2;n!=0;i=i+2,j=j+2){
		
		if(prime(i)==0&&prime(j)==0){
			printf("( %d, %d )\t",i,j);
			n--;
		}
		
	}
	getch();
	return 0;
}

/*int prime(int num){
	
	int i;
	
	for(i=2;i<num-1;i++){
		
		if(num%i==0){
			return 1;
		}
	}
	return 0;
}*/
