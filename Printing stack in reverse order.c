#include<stdio.h>
#include<stdlib.h>
typedef struct node
{ int info;
  struct node *next;
}node;
void insert(node **top,int a)
{ node *temp ;
  temp=(node *)malloc(sizeof(node));
  temp->info=a;
  temp->next=NULL;
  if(*top==NULL)
    *top=temp;
  else
  { temp->next=*top;
    *top=temp;
  }  
}
void display(node *t)
{  if(t==NULL)
    return;
  else
   {   display(t->next);
       printf("%d\n",t->info);
   }
  
}
int main()
{ node *top=NULL;
  insert(&top,5);
  insert(&top,6);
  insert(&top,7);
  insert(&top,8);
  insert(&top,10);
  printf("Printing Stack item from bottom to top \n");
  display(top);
  return 0;
}
