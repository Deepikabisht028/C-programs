#include<stdio.h>
#include<stdlib.h>
typedef struct node
{ int info;
  struct node *next;
}node;
node *head=NULL;
void insert()
{ node *temp ,*p;
  temp=(node *)malloc(sizeof(node));
  printf("Enter the value:");
  scanf("%d",&temp->info);
  temp->next=NULL;
  if(head==NULL)
    head=temp;
  else
  { temp->next=head;
    head=temp;
  }  
}
void display()
{  if(head==NULL)
     printf("Empty list.\n");
   else
   { printf("\nList: ");
     for(node *t=head;t!=NULL;t=t->next)
        printf("%d  ",t->info);
   }
   printf("\n");
   
}
void delete()
{ if(head==NULL)
    printf("Empty list.\n");
 else
 { node *de=head;
   printf("Deleted element: %d\n",head->info);
   head=head->next;
   de->next=NULL;
   free(de);
 }
}
int main()
{ int c;
  do{ printf("\n1).Enter\n2).Display\n3).Delete\n0).Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&c);
      switch(c)
      { case 0: break;
        case 1:insert();  break;
        case 2:display(); break;
        case 3:delete();  break;
        default : printf("Invalid Choice.\n");
      }
  }while(c);
   return 0;
}
