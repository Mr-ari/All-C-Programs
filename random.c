#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/*
int main(){

for (int i=0;i<5;i++) printf("%d\n",rand()%10);

return 0;
}

*/


/*This above program generates random numbers between 0-10
but the problem is every time we run the program the output 
will be same.because the seed is set to 1.
'''
''
'
so if we modify the seed every time the problem seems to be solved*/

int main(){

srand (time(0));

for (int i=0;i<5;i++) printf("%d\n",rand()%10);

return 0;
}

