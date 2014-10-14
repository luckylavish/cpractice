#include<stdio.h>
struct node
{
	int value;
	struct node* next;
};
int main()
{
	//Allocate the pointers
	struct node *x;
	struct node *y;
	struct node *z;

	//Allocate the pointees
	x = malloc(sizeof(node));
	y = malloc(sizeof(node));
	z = malloc(sizeof(node));

	//put the no. in pointees
	x->value = 1;
	y->value = 2;
	z->value = 3;

	//put the pointers in the pointees

	x->next = y;
	y->next = z;
	z->next = x;
}
