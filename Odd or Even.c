#include<stdio.h>

int main()
{
    printf("Find Out Odd Or EvEn \n");
    printf("______________________________________________________________________________________________________________\n\n\n");


    int n;

    printf("Put an integer as 'n'- \n");
    scanf("%d",&n);



    if(n%2!=0)
        printf("Odd \n");
    else
        printf("Even \n");
    return 0;
}
