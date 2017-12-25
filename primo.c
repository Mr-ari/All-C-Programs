#include<stdio.h>
#include<conio.h>
#define PRIME(n) n%i!=0? 0:1

int prime(int);


int main(){
	
	int rec,n;
	
	printf("Enter the prime number you want to check:\t");
	scanf("%d",&n);
	
	rec=prime(n);
	
	if(rec!=0)
	printf("\nThis is not a prime nubmber");
	
	else
	printf("\nThis is a prime number");
	
	getch();
	
	return rec;
	
	
}

int prime(int num){
	
	int i,flag=0;
	
	for(i=2;i<num-1;i++){
	
		flag=flag+PRIME(num);
		printf("%d",PRIME(num));
	}
	return flag;
}






