#include<stdio.h>
#include<conio.h>



struct student{
		
		char name[30];
		int roll;
		float sub1;
		float sub2;
		float sub3;
	};
	
int main(){
	
	int no_of_std,i,op;
	struct student s[60];
	
	printf("Enter the no of student you want to input information:\t");
	scanf("%d",&no_of_std);
	printf("\n");
	
	for(i=0;i<no_of_std;i++){
		printf("\nEnter the information of the %dst student:\n",i+1);
		scanf("%s %d %f %f %f",s[i].name,&s[i].roll,&s[i].sub1,&s[i].sub2,&s[i].sub3);
				
	}
	
	printf("\n\n------------------->SELECT BETWEEN THE FOLLOWING OPTIONS<-------------------------");
	printf("\n\t1.Check information for one student by enterinf roll no\n\t2.Check information of all the student\n");
	printf("Enter your option:\t");
	scanf("%d",op);
	
	switch(op){
		
		case 1:
			Printf("\nUnder contrution");
			break;
			
	case 2:
			printf("Here Is the information of all the student------------>");
			
			for(i=0;i<no_of_std;i++){
				
				printf("\n\nName: %s \nRoll number: %d \n Subject1: %f \nSubject2: %f \nSubject3: %f",s[i].name,s[i].roll,s[i].sub1,s[i].sub2,s[i].sub3);
				printf("\n!Thank You!");
			}
			break;
		default:
		printf("You entered an wrong keyword");
			
			
			
	}
	
	getch();
	
	return 0;
	
}
