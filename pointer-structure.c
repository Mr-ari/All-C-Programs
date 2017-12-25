#include<stdio.h>
#include<conio.h>
#define MAX 2

struct employee{
	
	double id;
	char name[20];
	char join[15];
	int salary;
	}; 

int main(){
	
	struct employee e[MAX-1],*ptr;
	
	printf("---------------------------------------------------------------------------------------------------------\n\n\t\t\t\t\tInput Panel\n\n------------------------------------------------------------------------------------------------------------");
	int i;
	
	ptr=e;
	
	for(i=0;i<MAX;i++){
		
		printf("\n\nInput the Information of the %d th Employee\n",i+1);
		//printf("Input ID\n");
	//	scanf("%lf",&(ptr+i)->id);
		scanf("%lf %s %s %d",&(ptr+i)->id,(ptr+i)->name,(ptr+i)->join,&(ptr+i)->salary);
	/*	printf("Name\n");
		scanf("%s",(ptr+i)->name);
		printf("Join date\n");
		scanf("%s",(ptr+i)->join);
		printf("Salary:\t");
		scanf("%d",&(ptr+i)->salary);*/
		
	}
	
	printf("---------------------------------------------------------------------------------------------------------\n\n\t\t\t\t\output Panel\n\n------------------------------------------------------------------------------------------------------------");

	for(i=0;i<MAX;i++){
		printf("\n\nInformation of the %d th Employee\n",i+1);
		printf("%lf\n%s\n%s\n%d",(ptr+i)->id,(ptr+i)->name,(ptr+i)->join,(ptr+i)->salary);
	/*	printf("Employee NAme-\t%s\n",(ptr+i)->name);
		printf("Joining Date-\t%s\n",(ptr+i)->join);
		printf("Salary-\t%d\n",(ptr+i)->salary);*/
	}
	
	getch();
	return 0;
}
