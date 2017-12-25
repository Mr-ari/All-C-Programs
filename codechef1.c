#include<stdio.h>

int main(){

int T,bar,mal,real,eibon,t;

scanf("%d",&T);
for(t=0;t<T;t++){
printf("Barcelona\t");
scanf("%d",&bar);
printf("Malaga\t");
scanf("%d",&mal);
printf("RealMadrid\t");
scanf("%d",&real);
printf("Eibar\t");
scanf("%d",&eibon);
if(bar>eibon&&real<mal)
printf("Barcelona\n");
else 
printf("RealMadrid\n");
}

return 0;
}

