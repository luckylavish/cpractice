#include<stdio.h>
#include<stdlib.h>
struct tree {
	int data;
	struct tree *lchild, *rchild;
}*node;
typedef struct tree BST;
void insert(BST *,BST *);
void inorder(BST *);
void preorder(BST *);
void postorder(BST *);
BST *search(BST *, int, BST **parent);
int main()
{
	int choice;
	char ans = 'N';
	int key;
	BST *new_node, *root, *tmp, *parent;
	BST *get_node();
	root = NULL;
	printf("\n*************Program of Binary Search Tree***********************\n");
	do
	{
		printf("\n1.Create\n2.Search\n3.Recursive Traversal\n4.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					new_node = get_node();
					printf("\nEnter the Element: ");
					scanf("%d",&new_node->data);
					if(root==NULL)
					{
						root = new_node;
					}
					else
						insert(root,new_node);

					printf("\nWant to enter more element: y or n");
					scanf("%c",&ans);
				break;
			case 2:
				printf("\n Enter element to be searched:");
				scanf("%d",&key);
				tmp = search(root,key,&parent);
				printf("\nparent of node %d is %d",tmp->data,parent->data);
				break;
			case 3:
				if(root==NULL)
					printf("Create tree first");
				else
				{
					printf("\nInorder Traverse\n");
					inorder(root);
					printf("\nPreorder Traverse\n");
					preorder(root);
					printf("\nPostorder Traverse\n");
					postorder(root);
				}
				break;
			}
		}while(choice != 4);

		return 0;

}
BST *get_node()
{
	BST *temp;
	temp = (BST *)malloc(sizeof(BST));
	temp->lchild = NULL;
	temp->rchild = NULL;
	return temp;
}
void insert(BST *root, BST *new_node)
{
	if(new_node->data < root->data)
	{
		if(root->lchild == NULL)
			root->lchild = new_node;
		else
			insert(root->lchild,new_node);
	}
	if(new_node->data > root->data)
	{
		if(root->rchild==NULL)
			root->rchild = new_node;
		else
			insert(root->rchild,new_node);
	}
	
}
BST *search(BST *root,int key, BST **parent)
{
	if(root!=NULL)
	{
		BST *temp;
		temp = root;
		while(temp!=NULL)
		{
			if(temp->data == key)
			{
				printf("\n %d Element is present",temp->data);
				return temp;
			}
			*parent = temp;
			if(temp->data > key)
				temp=temp->lchild;
			else
				temp = temp->rchild;
		}
	}
	else
	{
		printf("\nNo tree is created\n");
	}
	return NULL;
}
void inorder(BST *temp)
{
	if(temp!=NULL)
	{
		inorder(temp->lchild);
		printf("%d\t",temp->data);
		inorder(temp->rchild);
	}
}
void preorder(BST *temp)
{
	if(temp!=NULL){
		printf("%d\t",temp->data);
		preorder(temp->lchild);
		preorder(temp->rchild);
	}
}
void postorder(BST *temp)
{
	if(temp!=NULL)
	{
		postorder(temp->lchild);
		postorder(temp->rchild);
		printf("%d\t",temp->data);
	}
}
