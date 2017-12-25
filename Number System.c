#include<stdio.h>
#include<conio.h>

int main()

{
	int dec,bin,remin,input1,input2,j=1;
	
	printf("\t\t\t\tNumber System Simple Converter\n\n\n\n");
	printf("Enter as per your choice:\n\n");
	printf("\t1.Decimal to other number system.\n\t\t2.Other number system to Decimal number system.\n\nEnter your your choice here\t");
	scanf("%d",&input1);
	
	
	
	switch(input1)
	{
		case 1:
			
			printf("\n\n\tNow choose what you want to convert from decimal number system\n\n");
			printf("1.Binary Number System\n\t2.Octal Number System\n\nEnter your choice here:\t");
			scanf("%d",&input2);
			
			switch(input2)
			{
				case 1:
					printf("\n\nEnter the demimal number you want to convert:\t");
					scanf("%d",&dec);
					
					printf("\n\nIn binary number system it is\t");
					bin=0;
					while(dec!=0)
					{
						remin=dec%2;
						bin=bin+remin*j;
						j=j*10;
						dec=dec/2;
			
					}
					printf("%d",bin);
				    break;
				    
				    
					case 2:
				       	printf("\n\nEnter the demimal number you want to convert:\t");
					    scanf("%d",&dec);
					    printf("\n\nIn octal number system it is\t");
					while(dec!=0)
					{
						remin=dec%8;
						printf("%d",remin);
						dec=dec/8;
						
						
				    }
				    break;
				    
				    default:
				    	printf("\n\nYou Enter an Invalid Input");
				
					
			}
			break;
			
		case 2:
		
		    printf("\n\n\tNow choose from which number system you want to convert to decimal number system\n\n");
			printf("1.Binary Number System\n\t2.Octal Number System\n\nEnter your choice here:\t");
			scanf("%d",&input2);
			
			switch(input2)
			{
				case 1:
					printf("\n\nEnter the binary number you want to convert:\t");
					scanf("%d",&bin);
					printf("In decimal number system it is:\t");
					dec=0;
					
					while (bin!=0)
					{
						remin=bin%10;
						dec=dec+remin*j;
						j=j*2;
						bin=bin/10;
					}
					printf("%d",dec);
					
					break;
					
				case 2:
					printf("\n\nEnter the Octal number you want to convert:\t");
					scanf("%d",&bin);
					
					printf("\n\nIn decimal number system it is:\t");
					dec=0;
					
					while(bin!=0)
					{
						remin=bin%10;
						dec=dec+remin*j;
						j=j*8;
						bin=bin/10;
					}
					printf("%d",dec);
					break;
					
				default:
					printf("You entered an invaid input");
				 
				 	
			}
				
	}
	
	getch();
}
