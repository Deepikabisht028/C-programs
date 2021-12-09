#include<stdio.h>
#include<stdlib.h>
typedef struct node
{int data;
 struct node *next,*prev;
}node;
node *start=NULL;
void insertion(int a)
{ node *newnode;
  newnode=(node*)malloc(sizeof(node));
  if(newnode==NULL)
  { printf("Memory Not allocated.\n");
     return;  }
  newnode->data=a;
  newnode->next=NULL;
  newnode->prev=NULL;
  if(start!=NULL)
  {   newnode->next=start;
      newnode->next->prev=newnode;  }
  start=newnode;
}
void display()
{  if(start==NULL)
    {  printf("List Empty.\n");
       return; 
    }
    for( node *temp=start ; temp!=NULL ; temp=temp->next)
       printf("%d ",temp->data);
    printf("\n");
}
void search()
{ int a;
  node *temp=start;
  printf("\nEnter the Key:");
  scanf("%d",&a);
  if(temp->data==a)
  {  printf("\nKey found.\n");
     start->next->prev=NULL;
     start=start->next;
     free(temp);
     printf("Updated list:");
     display();
     return;
  } 
  temp=temp->next;
  while(temp->next!=NULL)
    { if(temp->data==a)
      { printf("\nKey found.\n");
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
        printf("Updated list:");
        display();
        return;
      }
      temp=temp->next;
    }
    if(temp->data==a)
    {  printf("\nKey found.\n");
      temp->prev->next=NULL; 
      printf("Updated list:");
     display();
    }
    else
      printf("\nKey not found.\n");
}
int main()
{ printf("Search Operation in Doubly Linked List .\n");
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
