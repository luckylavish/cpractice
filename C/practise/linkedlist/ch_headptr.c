#include<stdio.h>
struct node{
	int data;
	struct node *link;
}start=NULL;
typedef node node;
node* createnode()
{
	node * new_node;
	new_node = (noe *)malloc(sizeof(node));
	node->data=NULL;
	node->link=NULL;
	if(new_node!=NULL)
		return new_node;
}
void insert_node(node *head, node *new_node)
{
	node *ptr;
	ptr=head;
	while(ptr->link!=NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = new_node;
}
int main()
{
	node * node = createnode();
	if(start==NULL)
	{
		start = node;
		node->data = 5;
	}
	else
	{
		
	}
	
	return 0;
}
