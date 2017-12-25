#include<stdio.h>
#include<conio.h>

int main(){

FILE *fp;
char c;

printf("Data input\n\n");

fp=fopen("data.txt","w");

while((c=getchar()) != 0000);

putc(c,fp);

fclose(fp);

printf("Data Output\n\n");

fp=fopen("data.txt","r");

while(c=getc(fp) != EOF)
printf("%c",c);

fclose(fp);

return 0;
}

