#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct stack{
  char data;
  struct stack *next;
}stack;
stack *top=NULL;

void push(stack ** ,char );
stack *creatStack(char );
char pop(stack ** );
char *analyzeString(char []);
char returnPair(char );

int main(){

  char str[50];
  char ans = 'y';int choice;
  while(ans == 'y'){
    printf ("Enter ur choice \n\t1.check whether the string is valid or not. \n\t 2.Exit\n");
    scanf("%d",&choice);
    switch (choice) {
      case 1:
      printf("Enter the string please:\t");
      scanf("%s",str);
      printf("\n");
      printf("%s \t %s\n\n",str,analyzeString(str));
      break;
      case 2:
      ans = 'n';
      break;
      default:
      printf("\n U entered a wrong input...........");
    }
  }

  return 0;
}


stack *creatStack(char inp){
  stack *nw = (stack *)malloc(sizeof(stack));
  nw->data = inp;
  nw->next = NULL;
  return nw;
}

void push(stack **root,char inp){

  stack *nw = creatStack(inp);
  nw->next = *root;
  *root = nw;
}

char pop(stack **root){
  stack *temp = *root;
  if (temp == NULL) return '$';
  else{
    char popped = temp->data;
    *root = temp->next;
    free(temp);
    return popped;
  }
}

char *analyzeString(char str[50]){
  char popped,checkPair;int i;
  if (strlen(str)%2 != 0) return "ooNo";
  else {
    for (i=0 ; i<strlen(str) ; i++){
      if (i < (strlen(str)/2)) push (&top , str[i]);

      else{
        popped = pop(&top);
        checkPair = returnPair(str[i]);
        if (checkPair != popped) return "No";
  }
}
}
if (top == NULL) return "Yes";
else return "ddNo";
}

char returnPair(char ch){

  switch (ch) {
    case ')':
    return '(';
    case '}':
    return '{';
    case ']':
    return '[';
  }
}
