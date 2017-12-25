#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>

typedef struct stack{
  char data;
  struct stack *next;
}stack;
stack *stackOparator=NULL,*postfixExp=NULL;

void displayStack(stack ** );
void analyzeExpression(char []);
void push(stack ** ,char );
stack *newStack(char );
char pop(stack ** );
char peek(stack**);
int checkPrecedence(char );

int main(){

  char str[100];
  printf("Enter the expression:\t");
  scanf("%s",str);
  strcat(str , ")");
  push(&stackOparator,'(');
  displayStack(&stackOparator);
  analyzeExpression(str);
  displayStack(&postfixExp);
  return 0;
}

void displayStack(stack **root){

    stack *ptr = *root;
    if (ptr == NULL)
      printf("Empty Stack\n");
    else{
      while (ptr!= NULL){
        printf("%c",ptr->data);
        ptr = ptr->next;
      }
    }

}


stack *newStack(char dataEntry){

  stack *nw = (stack *)malloc(sizeof(stack));
  nw->data = dataEntry;
  nw->next = NULL;
  return nw;
}

void push(stack **root,char dataEntry){
    stack *entryStack = newStack(dataEntry);
    entryStack->next = *root;
    *root = entryStack;
}

char pop(stack **root){

  if ( *root == NULL)
    return -1;
  else{
    stack *temp = *root;
    char itempopped = temp->data;
    *root = temp->next;
    free(temp);
    return itempopped;
  }
}

char peek(stack **root){
  stack *temp;
  temp = *root;
  return temp->data;
}
void analyzeExpression(char str[100]){
    char ch,popped;int i,check;
    for (i=0 ; i<strlen(str) ;i++){
      ch = str[i];
    //  printf("%c\n",str[i]);
      if (ch != '*' || ch != '/' || ch != '+' || ch != '-' || ch != '^' || ch != '(' || ch != ')'){
        push (&postfixExp,ch);
      }
      else if(ch == '('){
        push(&stackOparator,ch);
      }
      else if(ch == ')'){
        popped = pop(&stackOparator);
        while (popped != '('){
          push(&postfixExp,popped);
          popped = pop(&stackOparator);
        }
      }

      else if (ch = '*' || ch == '/' || ch == '+' || ch == '-' || ch == '^'){
        check = checkPrecedence(peek(&stackOparator));
        while (checkPrecedence(ch) >= check && check != -1){

          char popped = pop(&stackOparator);
          push(&postfixExp,popped);
          check = checkPrecedence(peek(&stackOparator));
        }

      }
    }
}

int checkPrecedence(char ch){

  switch (ch) {
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
