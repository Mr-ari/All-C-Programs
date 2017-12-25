#include<stdio.h>
#include<conio.h>

int Binary_search(int * , int , int , int );
int Linear_search(int * , int , int , int );

int main(){
	
	int N,LOC,data[100],item,i,Loc=0;
	
	printf("Enter how many number u want to input:\t");
	scanf("%d",&N);
	data[0] = 0;
	printf("Enter the elements now:\n");
	for (i=1;i<=N;i++){
		scanf("%d",&data[i]);
	}
	
	printf("Enter the number u want to find out:\t");
	scanf("%d",&item);
	
	printf("\n\nYoue item is present in %d",Binary_search(&data[0], item, N, Loc));
	
	
	getch();
	return 0;
	
	
}

Linear_search( int *ptr,int item,int N,int loc){
	
	*(ptr+N+2) = item ; 
	
	for (loc=1;loc<=N+1;loc++){
		if (*(ptr+loc )== item)
			return loc;
	}
	loc=0;
	return loc;
}

Binary_search()




