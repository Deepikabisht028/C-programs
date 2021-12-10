#include <stdio.h>
#include <stdlib.h>
typedef struct node
{ int data ;
   struct node* next;
}node;
node *start=NULL;
void insert()
{ node *newnode;
  newnode =(node*)malloc(sizeof(node));
  if(newnode==NULL)
  { printf("Memory allocation not possible.\n");
   return;
  }
  printf("Enter the value:");
  scanf("%d",&newnode->data);
  newnode->next=NULL;
  if(start!=NULL)
    newnode->next=start;
  start=newnode;
}
void display()
{  if(start==NULL)
     printf("List Empty.\n");
   else{

     for(node *t=start;t!=NULL;t=t->next)
        printf("%d ",t->data);
      printf("\n");
    }
}
void deletealtr()
{  if(start==NULL)
    { printf("List Empty.\n");
     return; }
     for(node *t=start;t->next!=NULL;t=t->next)
       { node *q=t->next;
         if(q->next==NULL)
         {  t->next=NULL;
            printf("\nUpdated list.\n");
            display();
            return;
         }
         else
           t->next=q->next;
         free(q);
      }
       printf("\nUpdated list.\n");
       display();
}
int main()
{  int n;
   printf("Enter the no. nodes you want :");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
      insert();
   printf("\nList Element.\n");
   display();
   deletealtr();
   return 0;
}

