/*A program for implementation of stack push and pop function */

// By Mr_ari;

#include <stdio.h>
#include <malloc.h>

void display_stack(void);
int pop(void);
void push(int item);

typedef struct stack{
	int data;
	struct stack *link;
}stack;
stack *top;

//We take top variable as a global variable *******


int main(){

	int choice,popped,flag=1,item;
	while (flag){
	printf("Enter your choice:\n\t1.Push\n\t2.Pop\n\t3.Display stack\n\t4.Exit");
	scanf("%d",&choice);

	switch(choice){

		case 1:

			printf("Enter the value you want to push\n");
			scanf("%d",&item);

			push(item);
			printf("Push Successful\n");
			break;

		case 2:

			popped=pop();
			if (popped != -1){
				printf("Item is popped and that is %d\n",popped);
			}
			case 3:
			display_stack();
			break;
			case 4:
			flag = 0;
			break;
		default :
			printf("You Entered a wrong choice,enter again :\n");
	}
}
	return 0;
}

void display_stack(void){

	stack *ptr;
	ptr = top;
	printf("Here is your stack:\n\n");
	while (ptr != NULL){
		printf("%d\t",ptr->data);
		ptr = ptr->link;
	}
	printf("\n");
}

int pop(void){

	if (top == NULL){
		printf("Underflow\n");
		return -1;
	}
	else{
		int popped = top->data;
		stack *temp;
		temp = top;
		top = top->link;
		free(temp);
		return popped;
	}

}

void push(int item){

	stack *new_stk;
	new_stk = (stack *)malloc(sizeof(stack));
	new_stk->data = item;

	if (top == NULL){
		new_stk->link = NULL;
		top = new_stk;
	}
	else{
		new_stk->link = top;
		top  = new_stk;
	}
}
