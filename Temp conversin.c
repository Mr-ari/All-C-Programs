/*'''''''''''''''''''''''''A programme by Mr.Arijit''''''''''''''''''''''''''''*/


#include<stdio.h>
#include<conio.h>
int main()
{
    float n,r;
    int number;
    
	printf("\t\t\t\t\tTemparature conversion''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''");	
	printf("\n\n                                     Enter Ur Choice as per 1,2 and 3\n");
	printf("\n                       1.Celsius to Fahrenheit\n                         2.Fahrenheit to Celsius\n                      3.Celsius to Kelvin\n");
	printf("\n\nEnter your choice here\t");
	scanf("%1d",&number);
	
	
	switch(number)
	{
		
	case 1:
		printf("\nEnter Your Temparature in Celsius here\t ");
		scanf("%f",&n);
		
		r=(9*n+160)/5;
		
		printf("\n\nThe Temparature in Fahrenheit is\t%5.2f",r);
		
		break;
	
	case 2:
	printf("\n\nEnter your Temparature in Fahrenheit\t");
	scanf("%f",&n);
	
	r=(5*n-160)/9;
	
	printf("\n\nThe temparaure in celsius is\t%5.2f",r);
	break;	
	
	
	case 3:
		printf("\n\nEnter your temparature in Celsius\t");
		scanf("%f",&n);
		r=n+273;
		printf("\n\nThe temparature in Kelvin is\t%5.2f",r);
		break;
	
	
	default :
	printf("\n\nYou Entered an invalid Input");	
		
		
		
    }
	
	getch();
}
