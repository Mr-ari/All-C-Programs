#include<stdio.h>
#include<conio.h>
#include<math.h>

void palindrome(int);

int main()

{
	int n;
	
	printf("Enter how many palindrome number you want to print:\t");
	scanf("%d",&n);
	printf("\n");
	
	palindrome(n);
	getch();
	return 0;
	
}

void palindrome(int n)
{
	int i=0,j=0,remin,rev_no=0,origin_no,N=0;
	
	while(j<n){
		origin_no=i;
		remin=i%10;
		rev_no=rev_no*10+remin;
		i=i/10;
		
		if(origin_no==rev_no){
		
		for (i=2;i<n;i++){
		
		if(rev_no%i==0)
		N++;
		
		}
		if(N==0)
		printf("%d",rev_no);
		}
				
		i++;
		j++;
		
	}
}

