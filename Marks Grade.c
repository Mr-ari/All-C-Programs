#include<stdio.h>

int main()

{

    int Marks;

     printf("Enter Ypur Marks- \n");
     scanf("%d",Marks);


    if(Marks>100)
        printf("You entered wrong number \n");



    else if(Marks>=80)
        printf("Your grade is A \n");

    else if(Marks>=60)
        printf("Your grade is B \n");


}
