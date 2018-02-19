#include<stdio.h>
#include<conio.h>
#include<malloc.h>


void print(int arr[],int len){
	int i;
	for (i=0;i<len;i++) printf("%d  ",arr[i]);
	printf("\n");
}
void rotate(int arr[],int k){
	int len=5;
	int rem = k%len;int i,temp;
	int newArr[len];
	for (i=0;i<len;i++){
		temp = i+rem;
		if (temp>=len) temp = temp-len;
		newArr[temp] = arr[i]; 
	}
	print(newArr,len);
}
int main(){
	int arr[5]={1,2,3,4,5};
	rotate(arr,12);
	return 0;
}


