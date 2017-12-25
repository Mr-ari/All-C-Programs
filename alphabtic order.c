#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(void){
	
	char first_name[20][10],sec_name[20][10],lst_name[20][10],name[20][10],ph[10][10],temp[20][10];
	int i,j,n;
	
	printf("Enter the no. of person's number u want to input-\t");
	scanf("%d",&n);
	
	printf("\n\nEnter the Names and Numbers:\n");
	
	for(i=0;i<n;i++){
		
		scanf("%s %s %s %s",first_name[i],sec_name[i],lst_name[i],ph[i]);
		printf("\n");
		
		strcpy(name[i],lst_name[i]);
		strcat(name[i],",");
		temp[0]=first_name[i][0];
		temp[1]='\0';
		strcat(name[i],temp);
		strcat(name[i],".");
		temp[0]=sec_name[i][0];
		temp[1]='\0';
		strcat(name[i],temp);
	    
	}
	
	/*sorting of the name*/
	
	for(i=0;i<n-1;i++){
		if(strcmp(name[i],name[i+1])>0){
			strcpy(name[i+1],temp[i]);
			strcpy(name[i],temp[i]);
			strcpy(temp[i],ph[i+1]);
			strcpy(ph[i],ph[i+1]);
			strcpy(ph[i])
		}
		
	}
	
	
	for(i=0;i<n;i++){
	
	printf("%s\t %s\n",name[i],ph[i]);
}
	getch();
	return 0;
	
}
