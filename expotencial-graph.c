#include<stdio.h>
#include<conio.h>
#include<math.h>

int main (){
	
	float x,i,a;
	float y1,y2;
	a=0.4;
	printf("                                             Y--------->\n   ");
	printf("---------------------------------------------------------------------------------------------------->\n");
	for (x=0 ; x<5 ; x=x+ 0.25){
		
		y1 = (int) ( 50* exp(-a*x)+0.5);
		y2 = (int) ( 50* exp(-(a*a)*x)+0.5);
				
		printf("\n%f",y1);
		                                                             //for y1--->*  and for y2--->o
		if(y1>y2){
			
			if (x==2.5)
			printf("X |");
			else
			printf("  |");
			
			for (i=1;i<y2;i++)
			printf(" ");
			printf("o");
			for (i=y2;i<y1;i++)
			printf("-");
			printf("*\n");
			continue;
		}
		
		if (y1==y2){
			
			if (x==2.5)
			printf("x |");
			else
			printf("  |");
			for (i=1;i<y1;i++)
			printf(" ");
			printf("#\n");
			continue;
		}
		
		if(y1>y2){
			
			if (x==2.5)
			printf("x |");
			else
			printf("  |");
			
			for (i=1;i<y1;i++)
			printf(" ");
			
			printf("*");
			
			for (i=y1;i<y2;i++)
			printf("-");
			
			printf("o\n");
			continue;
		}
		
	}
	
	
	
	
	getch();
	return 0;
	
}
