/*PALINDROME PRIME NUMBER PRINTING WITH A CERTAIN FASION*/


#include<stdio.h>
#include<conio.h>
#include<math.h>

void palindrome(int);
int reverse(int);
int prime(int);

int main(){
	
	int n;
	
	printf("Enter how many prime palindrome number you want to print:\t");
	scanf("%d",&n);
	
	palindrome(n);
	
	getch();
	return 0;
}


void palindrome(int n){
	int num=2,rev,pri;
	
	int N=1;
	
	while(n!=0){
		
		rev=reverse(num);
		if(num==rev){
			
			pri=prime(num);
			
			if(pri==1){
			
			if(N%5==0){
			
			printf("%5d\n",num);
			n--;
			N++;
			}
			else{
				printf("%5d\t",num);
				n--;
				N++;
			}
			}
		}
		 
		num++;
		
	}
}


//dEFINE FUNCTION TO REVERSE THE NUMBER

int reverse(int num){
	
	int digit;
		
	if(num==0)
	return 0;
	
	else{
		digit=(int)log10(num);
		
		return ((num%10)*pow(10,digit))+reverse(num/10);
	}
	
}
/*dEFINE FUNCTION TO CHECK IT IS PRIME OR NOT*/
int prime(int num){
	
	int i;
	
	for(i=2;i<num-1;i++){
		
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}

