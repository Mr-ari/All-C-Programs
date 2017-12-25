#include<stdio.h>
#include<string.h>
#include<malloc.h>

typedef struct stack {
  char data;
  struct stack *next;
}stack;

stack *stackOparator=NULL,*stackExpression=NULL;

//------------------------------------------------------------------------------
void push(stack **,char );
char pop(stack **);
stack *newNode(char data);
void displayStack(stack **);
char peek(stack **);
int precedence (char );
void analyzeExpression(char []);
//------------------------------------------------------------------------------

int main(){
  char str[50];
  printf("Enter the infix expression:\t");
  scanf("%s",str);
  push(&stackOparator,'(');
  strcat(str,")");
  analyzeExpression(str);
  displayStack(&stackExpression);
  return 0;
}

stack *newNode(char item){
  stack *nwstk = (stack *)malloc(sizeof(stack));
  nwstk->data = item;
  nwstk->next = NULL;
  return nwstk;
}

void push(stack **root,char item){
  stack *nwstk = newNode(item);
  nwstk->next = *root;
  *root = nwstk;
}

char pop (stack **root){
  if (*root == NULL) printf("Underflow\n");
  else {
    stack *temp = *root;
    char popped = temp->data;
    *root = temp->next;
    free(temp);
    return popped;
  }
}

char peek(stack **root){
  stack *ptr = *root;
  return ptr->data;
}

void displayStack(stack **root){
  stack *ptr = *root;
  while (ptr != NULL) {
      printf("%c ",ptr->data);
      ptr = ptr->next;
  }
  printf("\n");
}

int precedence(char ch){

switch (ch) {
  case '^':
  return 3;
  case '*':
  case '/':
  return 2;
  case '+':
  case '-':
  return 1;
  case '(':
  return -1;
}
}


void analyzeExpression(char str[50]){
  int i=0;char ch,popped,prevElement;
  while (stackOparator != NULL){
    ch = str[i];
    if (ch!='*'||ch !='/'||ch!='+'||ch!='-'||ch!='^'||ch!='('||ch !=')') push(&stackExpression,ch);
    else if (ch == '(') push(&stackOparator,ch);
    else if (ch == ')'){
      do{
        popped = pop(&stackOparator);
        if (popped != '(') push(&stackExpression,popped);
      }
      while (peek(&stackOparator)!='(');
    }
    else if (ch!='*'||ch !='/'||ch!='+'||ch!='-'||ch!='^'){
      prevElement = peek(&stackOparator);
      if (precedence(prevElement) >= precedence(ch)) {
        popped = pop(&stackOparator);
        push(&stackExpression,popped);
      }
      push(&stackOparator,ch);
    }
  }
}
