#include<stdio.h>
#include<malloc.h>

void printArray(int a[3][3]){
  for(int i=0;i<3;i++) {
    for (int j=0;j<3;j++)
    printf("%d ",a[i][j]);
    printf("\n");
  }
}


int main(){

  int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int choice=1,i1,i2,temp;
  while(choice){
    printf("1.exchange\n2.print\n3.exit\n");
    scanf("%d",&choice);
    switch (choice) {

      case 1:
      printf("1.Row wise \n2.coloum wise\n");
      scanf("%d",&choice);
      printf("Enter the index numbers u want to swap\n");
      scanf("%d %d",&i1,&i2);
      switch (choice){
        case 1:
        for (int j=0;j<3;j++){
          temp = a[i1][j];
          a[i1][j]=a[i2][j];
          a[i2][j]=temp;
        }
        break;
        case 2:
        for (int j=0;j<3;j++){
          temp = a[j][i1];
          a[j][i1]=a[j][i2];
          a[j][i2]=temp;
        }
        break;
      }
      break;
      case 2:
      printArray(a);
      break;
      case 3:
      choice = 0;
    }
  }
}
