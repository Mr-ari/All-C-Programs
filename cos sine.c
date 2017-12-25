#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14

double cosine(float a);
double sine(float a);
//double facto(int);

int main()
{
	float n;
	
	printf("Enter the Angle-\t");
	scanf("%f",&n);
	printf("\n\n"); 
	
	float x=n*(PI/180);
	
	//double a=cosine(x);
	//b=sine(x);
	
	printf("Cosine= %-10.2lf",cosine(x));
	printf("\nSine=%-10.2lf",sine(x));
	getch();
	return 0;
	
	
}


double cosine(float x){
	
	int i;
	double sum=1,cos=1;
	
	for(i=1;i<=15;i++)
    {
        cos=cos*(-1)*x*x/(2*i*(2*i-1));
        sum=sum+cos;
    }
//	printf("\n\n%lf\n",cos);
	
	return sum;
}


double sine(float x){
	int i;
	double sin=x,sum=x;
	
	for(i=1;i<=15;i++){
		
	sin = (sin * (-1)*(2 * i - 1) * x * x) / (2 * i * (2 * i + 1)) ;
		sum=sum+sin;
	}
	
	return sum;
}
