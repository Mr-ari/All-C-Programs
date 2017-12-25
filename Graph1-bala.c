#include<stdio.h>
#include<conio.h>

int main(){
	
	int arr[4],i,j,k;
	
	for (i=0;i<5;i++){
		printf("Enter the member of group %d-th : \n",i+1);
		scanf("%d",&arr[i]);
		
	}
	
	
	
	for (i=0;i<5;i++){
		printf("\n        |\n");
		for(j=1;j<=3;j++){
			if (j==2)
			printf("Group- %1d|",i+1);
			else
			printf("        |");
			for (k=1;k<=arr[i];k++){
			printf("*");
			if (j==2 && k==arr[i])
			printf("  (%d)",arr[i]);
			
		}
		printf("\n");
		}
	}
	
	getch();
	return 0;
}
