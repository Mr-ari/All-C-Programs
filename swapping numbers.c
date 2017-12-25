#include<stdio.h>
main()

{

    char a,b,temp;

    printf("Mirror of two Alphabates\n...........................................................................\n");

    printf("Enter Any Two Alphabates: \n");

    scanf("%c%c",&a,&b);

    temp=a;
    a=b;
    b=temp;

    printf( the alphabates  mirror are - %c%c::%c%c",a,b,b,a);

    return 0;
}

