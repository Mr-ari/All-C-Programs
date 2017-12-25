#include<stdio.h>
#include<conio.h>

void round_up(double);
int main(){

	double a,f;
	printf("Enter the floating point number\t ");
	scanf("%lf",&a);
	
	round_up(a);
	
	getch();
	return 0;
}

void round_up(double a){

	
	printf("\nAfter rounded the number is like :\t%.2lf\n\nIn words the number will look like:\n",a);
	
	int temp= a*100;
	
	/*reverse the temp*/
	int arr[20],i=0,j;
	
	while(temp!=0){
		if(i==2)
		i++;
		else{
			
		arr[i]=temp%10;		
		i++;
		temp=temp/10;
		}
	}
	for(j=i;j>=0;j--){
		if(j==2)
		printf("point ");
		
		else{
		
		if(j==0&&arr[j]>=5)
		arr[j]++;
		
		switch(arr[j])
        {
            case 0: printf("Zero ");
                break;
            case 1: printf("One ");
                break;
            case 2: printf("Two ");
                break;
            case 3: printf("Three ");
                break;
            case 4: printf("Four ");
                break;
            case 5: printf("Five ");
                break;
            case 6: printf("Six ");
                break;
            case 7: printf("Seven ");
                break;
            case 8: printf("Eight ");
                break;
            case 9: printf("Nine ");
                break;
		}
	   	}
	}
}



