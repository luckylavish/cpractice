#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *Head = NULL;
void create();
void insert_end(int x);
void insert_beg(int x);
//void insert_mid(int x);
//void delete(int x);
void display(struct node **node);
//void reverse(struct node **node);
int length(struct node **node);
typedef struct node node;
node *getNode();
int main()
{
	int x,ch;
	while(1){
		printf("\nEnter your choice:\n1.Create\n2.Insert End\n3.Insert Beg\n4.Insert Mid\n5.Delete node\n6.Reverse Linked List\n7.Display\n8.EXIT\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: create();
				break;
			case 2: printf("Enter the no.: ");
				scanf("%d",&x);
				insert_end(x);
				break;
			case 3: printf("Enter the no.: ");
				scanf("%d",&x);
				insert_beg(x);
				break;
			case 4: printf("Enter the no.: ");
				scanf("%d",&x);
			//	insert_mid(x);
				break;
			case 5: printf("Enter the position: ");
				scanf("%d",&x);
			//	delete(x);
				break;
			case 6: //reverse(&Head);
				break;
			case 7: display(&Head);
				break;
			case 8: exit(0);
		}
	}
	return 0;
}
void create()
{
	int x,i,j;
	printf("Enter the no. of nodes: ");
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%d",&j);
		if(Head==NULL)
		{
			node *ptr= getNode();
			if(ptr!=NULL){
				ptr->data = j;
				ptr->next = NULL;
				Head = ptr;
			}
			else
				printf("memory out of bound");
		}
		else
		{
			insert_end(j);
		}
	}
}	
node * getNode()
{
	node *ptr = (node *)malloc(sizeof(node));
	if(ptr!=NULL)
	{
		ptr->next= NULL;
		return ptr;
	}
	else
		return NULL;
}
void insert_end(int x)
{

	node *new = getNode();
	node *ptr;
	ptr = Head;
	while(ptr->next!=NULL)
		ptr = ptr->next;
	if(new!=NULL)
	{
		new->data = x;
		ptr->next = new;

	}
	else
		printf("Memory :\n(");
}
void display(node **ptr)
{
	if(*ptr!=NULL)
	{
		while(*ptr!=NULL)
		{
			printf("%d->",(*ptr)->data);
			(*ptr) = (*ptr)->next;
		}
	}
	else
		printf("memory no allocated");
	printf("End\n");
}
void insert_beg(int x)
{
	
	node *new = getNode();
	if(new!=NULL)
	{
		new->data = x;
		new->next = Head;
		Head = new;
	}
}
