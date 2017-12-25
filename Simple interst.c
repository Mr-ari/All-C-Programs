#include<stdio.h>
main()
{
int amount,rate,time,interest;
printf("/nEnter Principal Amount-");
scanf("%d",&amount);

printf("/nEnter Rate of Interest");
scanf("%d",&rate);

printf("/nEter the Time");
scanf("%d",&time);

interest=(amount*time*rate)/100;

printf("/nYour Simple Interest is:%d",interest);
}
