#include <stdio.h>
#include <malloc.h>

typedef struct node{

	int data;
	struct node *link;
}node;

void creat_list();
void display();
void rev_list();

node *start;

int main(){

	creat_list();
	display();
	rev_list();
	display();
	return 0;
}

void display(){
	printf("\nDisplaying items\n");

	node *ptr = start;
	while (ptr != NULL){
		printf("%d\t",ptr->data);
		ptr = ptr->link;
	}
	printf("\n");
}

void creat_list(){

	printf("Enter values press 9999 to exit\n");
	int data;node *head,*temp;
	printf("Enter value:\n");
	head = (node *)malloc(sizeof(node));
	start = head;
	scanf("%d",&data);
	while(data != 9999){
		temp = head;
		head->data = data;
		head = (node *)malloc(sizeof(node));
		temp->link = head;
		printf("Enter value:\n");
		scanf("%d",&data);
	}
	temp->link = NULL;
}

void rev_list(){

	node *ptr,*temp;
	ptr = start->link;
	start->link = NULL;
	while (ptr->link != NULL){
		temp = ptr->link ;
		ptr->link = start;
		start = ptr;
		ptr = temp;
	}

	ptr->link = start;
	start = ptr;
}