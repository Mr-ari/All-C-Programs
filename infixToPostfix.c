#include<stdio.h>
#include<malloc.h>
#include<string.h>

typedef struct node {
  char data;
  struct node *next;
}node;

typedef struct stack {
  node *top;
}stack;


stack *creatStack(void){
  stack *newStack = (stack *)malloc (sizeof(stack));
  newStack->top = NULL;
  return newStack;
}
void push (stack *stack1,char info){
  node *newNode = (node *)malloc(sizeof(node));
  newNode->data = info;
  newNode->next = stack1->top;
  stack1->top = newNode;
}
char pop (stack *stack1){
  if (stack1->top == NULL) return '@';
  char popped = stack1->top->data;
  node *temp = stack1->top;
  stack1->top = stack1->top->next;
  free(temp);
  return popped;
}
char peek (stack *stack1){
  if (stack1->top == NULL) return '@';
  return stack1->top->data;
}
int checkPrecedence(char ch){
  switch (ch){
    case '+':
    case '-':
      return 1;
    case '*':
    case '/':
      return 2;
    case '^':
      return 3;
  }
  return -1;
}
void displayStack(stack *stack1){
  if (stack1->top == NULL) printf("Empty\n");
  else{
    node *ptr = stack1->top;
    while (ptr!=NULL){
      printf("%c",ptr->data);
      ptr=ptr->next;
    }
    printf("\n");
  }
}
stack *infixToPostfix(char str[100]){
  stack *finalExp = creatStack();
  stack *oparatorStack = creatStack();
  int popped;char ch;
  for (int i=0;i<strlen(str);i++){
    ch = str[i];
    if (ch != '*' && ch != '/' && ch != '+' && ch != '-' && ch != '^' && ch != '(' && ch != ')') push(finalExp,ch);
    else if (str[i]=='^'||str[i]=='*'||str[i]=='/'||str[i]=='-'||str[i]=='+') push(oparatorStack,ch);
    else if (ch == '(') push(oparatorStack,ch);
    else if (ch == ')') {
      popped = pop(oparatorStack);
      while (popped != '('){
        push(finalExp,popped);
        popped = pop(oparatorStack);
      }
    }
  }
  return finalExp;
}

int main(){
  char arr[100];
  printf("Enter your infix expression:\n");
  scanf("%s",arr);
  stack *final = infixToPostfix(arr);
  displayStack(final);
  return 0;
}
