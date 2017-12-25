#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack
{
	int data;
	struct stack *link;
}stack;
stack *top = NULL;

void push(int item);
int pop (void);
void analyze_stack(char []);

int main(){

	char str[100];
	printf("Enter the Arithmatic Expression:\n");
	scanf("%s",str);

	analyze_stack(str);
	printf("After evaluating it comes: %d\n", top->data );

}

void push (int item){
	stack *nw;
	nw = (stack *)malloc(sizeof(stack));
	nw->data = item;

	if (top == NULL){
		nw->link = 	NULL;
		top = nw;
	}

	else{
		nw->link = top;
		top = nw;
	}
}
int pop(void){

	if (top == NULL){
		printf("pop cannot done : Underflow\n");
		return '\0';
	}

	else{
		int item = top->data;
		stack *temp;
		temp=top;
		top = top->link;
		free(temp);
		return item;
	}
}

void analyze_stack(char str[100]){

	char c;

	int x,first_pop,sec_pop,i;
	for (i=0;i<strlen(str);i++){

			if (str[i]=='^'||str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'){

					first_pop = pop();
					sec_pop = pop();
					switch (str[i]){
						case '*':
							push(first_pop * sec_pop) ;
							break;
						case '+':
							push(first_pop + sec_pop);
								break;
						case '/':
								push(sec_pop / first_pop);
								break;
						case '-':
								push(sec_pop - first_pop);
								break;
						case '^':
								push(first_pop ^ sec_pop) ;
								break;
				}
        }

			else{
				c = str[i];
				x = c - '0';
				push(x);
			}


 	}

}
