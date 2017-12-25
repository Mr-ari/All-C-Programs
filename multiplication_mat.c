#include<stdio.h>

void showMatrix(int mat[10][10],int row,int col);

int main(){
  int matOne[10][10],matTwo[10][10],matMul[10][10];int rowOne,colOne,rowTwo,colTwo,i=2,j,temp,k;

  printf("Enter the number of Row for the first matrix\n");
  scanf("%d",&rowOne);
  printf("Enter the number of Colomn for the first Matrix\n");
  scanf("%d",&colOne);

  printf("Enter the number of Row for the second matrix\n");
  scanf("%d",&rowTwo);
  printf("Enter the number of Colomn for the second Matrix\n");
  scanf("%d",&colTwo);

  if (colOne != rowTwo) return 0;
  else{
    printf("\nPlease Enter the First matrix now :\n");
    for (i=0;i<rowOne;i++)
      for (j=0;j<colOne;j++)
        scanf("%d",&matOne[i][j]);

    printf("\nPlease Enter the second matrix now :\n");
    for (i=0;i<rowTwo;i++)
      for (j=0;j<colTwo;j++)
        scanf("%d",&matTwo[i][j]);


    for (i=0;i<rowOne;i++)
      for (j=0;j<colTwo;j++){
        matMul[i][j]=0;
        for (k=0;k<colOne;k++) matMul[i][j] = matMul [i][j] + matOne[i][k]*matTwo[k][j];
      }

      showMatrix(matOne,rowOne,colOne);
      printf("    X\n");
      showMatrix(matTwo,rowTwo,colTwo);
      printf("    =\n");
      showMatrix(matMul,rowOne,colTwo);
      return 0;
  }
}

void showMatrix(int mat[10][10],int row,int col){
  int i,j;
  for (i=0;i<row;i++){
    for (j=0;j<col;j++)
      printf("  %4d",mat[i][j]);
      printf("\n");
  }
  printf("\n");
}
