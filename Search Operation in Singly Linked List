#include<stdio.h>
#include<stdlib.h>
typedef struct node
{int data;
 struct node *next;
}node;
node *head=NULL;
void insertion(int a)
{ node *newnode;
  newnode=(node*)malloc(sizeof(node));
  if(newnode==NULL)
  { printf("Memory Not allocated.\n");
     return;  }
  newnode->data=a;
  newnode->next=NULL;
  if(head!=NULL)
     newnode->next=head;
  head=newnode;
}
void display()
{  if(head==NULL)
    {  printf("List Empty.\n");
       return; 
    }
    for( node *temp=head ; temp!=NULL ; temp=temp->next)
       printf("%d ",temp->data);
    printf("\n");
}
void search()
{ int a;
  node *temp=head;
  printf("\nEnter the Key:");
  scanf("%d",&a);
  if(temp->data==a)
  {  printf("\nKey found.\n");
     head=head->next;
     free(temp);
     printf("Updated list:");
     display();
  } 
  else
  { while(temp->next->next!=NULL)
    { if(temp->next->data==a)
      { printf("\nKey found.\n");
        node *b=temp->next;
        temp->next=temp->next->next;
        free(b);
        printf("Updated list:");
        display();
        return;
      }
      temp=temp->next;
    }
    if(temp->next->data==a)
    {  printf("\nKey found.\n");
      temp->next=NULL; 
      printf("Updated list:");
     display();
    }
    else
      printf("\nKey not found.\n");
  }
}
int main()
{ printf("Search Operation in Singly Linked List .\n");
 insertion(7);
 insertion(9);
 insertion(70);
 insertion(27);
 insertion(33); 
 printf("\nList Elements:\n");
 display();
 search();
 return 0;
}
