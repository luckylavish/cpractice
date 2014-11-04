#include<stdio.h>
#include<stdlib.h>
struct list{
	int data;
	struct list * next;
}*HEAD;
typedef struct list node;
void create();
node* get_node();
void insert_end(int x);
void insert_beg(int x);
void insert_mid(int x, int l);
void delete_beg(node **head);
void display();
int length();
void reverse();
int main()
{
	int a,ch,l;
	while(1)
	{
		printf("\n1. Create\n2.Insert at end\n3.Display\n4.Exit\n5.Insert at Beg\n6.Insert at mid\n7.Delete beg");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1: create();
				break;
			case 2: printf("\nEnter the Element you wan't to insert:");
				scanf("%d",&a);
				insert_end(a);
				break;
			case 3: display();
				break;
			case 4: exit(0);
			case 5: printf("\nEnter the Element you wan't to insert:");
				scanf("%d",&a);
				insert_beg(a);
				break;
			case 6: printf("\nEnter the Element and location you wan't to insert:");
				scanf("%d%d",&a,&l);
				insert_mid(a,l);
				break;
			case 7: delete_beg(&HEAD);
				break;
			case 8: reverse();
				break;
		}
	}
}
node* get_node()
{
	node * new = (node *)malloc(sizeof(node));
	if(new!=NULL){
		new->next = NULL;
		return new;	
	}
	else
		return NULL;
}
void create()
{
	int x,i;
	printf("\nEnter the no. of nodes");
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		int y;
		printf("\nEnter value:");
		scanf("%d",&y);
		if(HEAD==NULL)
		{
			node *new = get_node();
			if(new!=NULL)
			{
				new->data = y;
				new->next = NULL;
				HEAD = new;
			}
			else
				printf("\n out of memory");
		}
		else
			insert_end(y);
	}
	
}
			
void insert_end(int x)
{
	node *new = get_node();
	node *ptr;
	ptr = HEAD;
	while(ptr->next!=NULL)
		ptr = ptr->next;
	if(new!=NULL)
	{
		ptr->next = new;
		new->data=x;
	}
	else
	{
		printf("\nout of memory");
	}
}
void insert_beg(int x)
{
	node *new = get_node();
	new->data = x;
	new->next = HEAD;
	HEAD = new;
}
int length()
{
	int count=1;
	node *ptr;
	ptr = HEAD;
	while(ptr!=NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return count;
}
void insert_mid(int x, int l)
{
	node *ptr = HEAD;
	int a;
	int lengh = length();
	if(l>(lengh-1))
	{
		printf("\nLocation doesn't exist re enter the location length is %d:",lengh);
		scanf("%d",&a);
		insert_mid(x,a);
	}
	else
	{
		node *new = get_node();
		if(new!=NULL)
		{
			//node *temp;
			int count =1;
			while(count!=(l-1))
			{
				ptr=ptr->next;
				count++;
			}
			node *save;
			save = ptr->next;
			new->data = x;
			ptr->next = new;
			new->next = save;

		}
		else
			printf("\nout of memory\n");
	}
}
void delete_beg(node **head)
{
	node *temp = *head;
	*head = temp->next;
	free(temp);
}
void display()
{
	node *ptr;
	ptr = HEAD;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr = ptr->next;
	}
	printf("end of node\n");
}
void reverse()
{
	node *ptr = HEAD;
	node *new;
	node *prev = NULL;
	while(ptr!=NULL)
	{
		new = ptr->next;
		ptr->next = prev;
		prev = ptr;
		ptr = new;
	}
	HEAD = prev;
}
