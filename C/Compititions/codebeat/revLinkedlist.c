#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*HEAD=NULL;
typedef struct node node;
void reverse(node **);
node *getnode();
void display(node *);
void create(node **);
int main()
{
	create(&HEAD);
	printf("Simple linked list\n");
	display(HEAD);
	reverse(&HEAD);
	printf("\n Reverse linked list\n");
	display(HEAD);
	return 0;
}
void create(node **ptr)
{
	int n,i;
	printf("Enter no. of nodes");
	scanf("%d",&n);
	while(n!=0)
	{
		int data;
		scanf("%d",&data);
		node *new = getnode();
		if(HEAD==NULL)
		{
			new->data=data;
			*ptr = new;
		}
		else
		{
			new->data=data;
			new->next=*ptr;
			*ptr=new;
		}
		n--;
	}
}
void reverse(node **HEAD)
{
	node *prev = NULL;
	node *current = *HEAD;
	node *next;
	while(current!=NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*HEAD = prev;
	
}
node *getnode(){
	node *new = (node *)malloc(sizeof(node));
	new->next=NULL;
	return new;
}
void display(node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("end of node");
}
