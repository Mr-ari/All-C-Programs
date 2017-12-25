#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
};

struct node * start=NULL;
struct node * create (struct node *);
struct node * display (struct node *);
struct node * ins_beg (struct node *);
struct node * ins_end (struct node *);
struct node * ins_before (struct node *);
struct node * ins_after (struct node *);
struct node * del_beg (struct node *);
struct node * del_node (struct node *);
struct node * del_before (struct node *);
struct node * del_after (struct node *);

int main(void)
{
	int n;

	do
	{
	 printf("welcome");
	 printf("1.create");
	 printf("2.display");
	 printf("3.insert at beg");
	 printf("4.nsert before a given node");
	 printf("5.insert after a given node");
	 printf("6.nsert at end");
	 printf("7.delete at begn \n 8. delete before a given node \n 9. delete a given node \n 10. delete at end \n 11. exit");
	 scanf("%d",&n);

	 switch(n)
	 {
	 	case 1: start=create(start);
	 	printf("\n link lst created");
		 break;

	 	case 2: start=display(start);
	 	break;
	 	case 3: start=ins_beg(start);
	 	break;
	 	case 4: start=ins_before(start);
	 	break;
	 	case 5: start=ins_after(start);
	 	break;

	 	case 6: start=ins_end(start);
	 	break;

	 	case 7: start=del_beg(start);
	 	break;

	 	case 8: start=del_before(start);
	 	break;

	 	case 9: start=del_node(start);
	 	break;

	// 	case 10: start=del_end(start);
	 //	break;
	 }
 } while (n!=11);

	 return 0;
}


	 struct node * ins_beg(struct node * start)
	 {
	 	struct node *new_node;
	 	int no;

	 	printf("\n enter the data:");
	 	scanf("%d",&no);
	 	new_node=(struct node *)malloc(sizeof(struct node));
	 	new_node->data=no;
	 	new_node->next=start;
	 	start=new_node;
	 	return start;
	 }
	 struct node * del_beg(struct node * start)
	 {
	 	struct node *ptr;
	 	ptr=start;
	 	start=start->next;
	 	free(ptr);
	 	return start;
	 }
