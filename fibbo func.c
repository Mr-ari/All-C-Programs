#include<stdio.h>
#include<conio.h>

void fibbo(int);

int main(){
	int n;
	
	printf("Enter how mant fibbonacci number you want to print:\t");
	scanf("%d",&n);
	printf("\n");
	fibbo(n);
	
	getch();
	return 0;
}

void fibbo(int n){
	
	int first=0,second=1,temp,coloum=1;
	printf("0\t");
	while(n!=0){
		
		temp=second;
		second=first+second;
		first=second;
		n--;
		
		if(coloum==5){
		printf("%3d\n",second);
		coloum=1;
	    }
		else{
			printf("%3d\t",second);
			coloum++;
		}
				
	}
}
