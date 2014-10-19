#include<stdio.h>
 #include<stdlib.h>
  struct node{
          int info;
          struct node *link;
  };
  
 typedef struct node node;
  int main()
  {
          node *head, *curr;
          int i;
          for(i=0;i<10;i++)
          {
           curr = (node *)malloc(sizeof(node));
           curr->info = i;
           curr->link = head;
           head = curr;
          }
          curr = head;
          while(curr)
          {
           printf("%d",curr->info);
           curr = curr->link;
          }
          return 0;
  }

