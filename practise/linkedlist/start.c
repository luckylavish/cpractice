#include<stdio.h>
#include<stdlib.h>
void create();
void insert_end(int g);
void display();
void insert_beg(int g);
int length();
void insert_mid(int g, int j);
void delete_beg();
struct node{
	int info;
	struct node *link;
}*start;
typedef struct node node;
void create()
{
	int i,n,m;	
	 node *temp;
	printf("Enter the no. of nodes:");
	scanf("%d",&i);
	for(n=0;n<i;n++)
	{
		temp = ( node *)malloc(sizeof( node));
		if(temp!=NULL)
		{
			printf("\nEnter value for node %d :",n);
			scanf("%d",&m);
			if(start == NULL){
				temp->info = m;
				temp->link = NULL;
				start = temp;
				printf("node created\n");
			}
			else
				insert_end(m);
		}
		else
			printf("\n out of memory\n");
	}
}

void insert_end(int x)
{
	node *ptr;
	ptr = (node *)malloc(sizeof(node));
	ptr = start;
	
	if(ptr!=NULL)
	{
		ptr = start;
		while(1){
			if(ptr->link!=NULL)
				ptr=ptr->link;
			else
				break;
		}
		ptr->link = (node *)malloc(sizeof(node));
		ptr = ptr->link;
		ptr->info = x;
		ptr->link = NULL;
	}
	else
		printf("\nunable to allocate memory\n");
}
void insert_beg(int x)
{
	if(start!=NULL)
	{
		node *ptr;
		ptr = (node *)malloc(sizeof(node));
		ptr->info = x;
		ptr->link = start;
		start = ptr;
	}
	else
	{
		create();
	}
}
int length()
{
	node *ptr;
	int count =1;
	ptr=start;
	while(ptr!=NULL)
	{
		ptr = ptr->link;
		count++;
	}
	return count;
}
void insert_mid(int x,int l)
{
	int  i,pos;
	printf("getting length\n");
	pos = length();
	printf("length of linkedlist is %d\n",pos);

	if(l<pos)
	{
		node *temp,*newnode,*save;
		newnode=(node *)malloc(sizeof(node));
		newnode->info=x;
		newnode->link=NULL;
		temp = start;
		for(i=1;i<pos-1;i++)
		{
			temp = temp->link;
		}
		save = temp->link;
		temp->link = newnode;
		newnode->link=save;
	}
	else
	{
		printf("position not valid max pos is %d\n",length());
	}
}
void delete_beg()
{
	start = start->link;
	printf("node deleted successfully\n");
}
void display()
{
	node *ptr;
	ptr = start;
	printf("\nin display:\n");
	while(ptr!=NULL)
	{
		printf("%d->",ptr->info);
		ptr = ptr->link;
	}
	printf("end of list\n");
}
int main()
{
	int a,b,c;
	while(1)
	{	printf("\n1. Create\n2. Display\n3.Insert node at end\n4. Enter node at begning\n5. Insert node in mid\n6.Delete node from beg.\n7.Exit\nEnter your choice:");
		scanf("%d",&a);
	switch(a)
	{
		case 1:
			create();
			break;
		case 2:
			display();
			break;
		case 3: 
			printf("\nenter value:");
			scanf("%d",&b);
			insert_end(b);
			break;
		case 4:
			printf("\nenter value:");
			scanf("%d",&b);
			insert_beg(b);
			break;
		case 5:
			printf("\nenter value:");
			scanf("%d",&b);
			printf("\nenter position:");
			scanf("%d",&c);
			insert_mid(b,c);
			break;
		case 6:
			delete_beg();
			break;
		case 7:
			exit(0);
		default:
			printf("Please enter correct choice!\n");
	}
	}
	return 0;
}
