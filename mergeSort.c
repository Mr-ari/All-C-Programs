#include<stdio.h>

void mergeSort(int [],int ,int );
void merge(int [],int ,int ,int);

void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main(){
  int len;
  printf("Enter how many numbers you want to enter");
  scanf("%d",&len);
  int arr[len];
  for (int i=0;i<len;i++) scanf("%d",&arr[i]);
  printf("list inputed :\n");
  printArray(arr,len);
  mergeSort(arr,0,len-1);
  printf("Sorted array:\n");
  printArray(arr,len);
  return 0;
}

void mergeSort(int arr[],int low,int high){
  if (low<high){
      int mid = low+(high-low)/2;
      mergeSort(arr,low,mid);
      mergeSort(arr,mid+1,high);
      merge(arr,low,mid,high);
  }
}

void merge(int arr[],int low,int mid,int high){
  int n1,n2,i=0,j=0;int k;
  n1 = mid-low+1;
  n2 = high - mid;
  int temp1[n1],temp2[n2];
  //***********copying elements into two temporary arrays************
  for (i=0;i<n1;i++) temp1[i] = arr[low+i];
  for (i=0;i<n2;i++) temp2[i] = arr[mid+1+i];
  i=0,j=0;k=low;
  while(i<n1 && j<n2){
    if (temp1[i]<temp2[j]){
      arr[k]=temp1[i];i++;k++;
    }
    else {
      arr[k] = temp2[j];j++;k++;
    }
  }
    while (j<n2){
      arr[k]=temp2[j];k++;j++;
    }
      while (i<n1){
        arr[k]=temp1[i];k++;i++;
      }
}
