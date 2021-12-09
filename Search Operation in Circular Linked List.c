#include<stdio.h>
#include<stdlib.h>
typedef struct node
{int data;
 struct node *next;
}node;
node *start=NULL;
node* insertion(int a,node *rear)
{ node *newnode;
  newnode=(node*)malloc(sizeof(node));
  if(newnode==NULL)
  { printf("Memory Not allocated.\n");
    return 0;  }
  newnode->data=a;
  if(start==NULL)
    start=rear=newnode;  
  else
  { rear->next=newnode;
    rear=newnode;  
  }
  newnode->next=start;
  return rear;
}
void display()
{  if(start==NULL)
    {  printf("List Empty.\n");
       return; 
    }
    node *temp=start;
    for( ; temp->next!=start ; temp=temp->next)
       printf("%d ",temp->data);
    printf("%d\n",temp->data);
}
void search(node *rear)
{ int a;
  node *temp=start;
  printf("\nEnter the Key:");
  scanf("%d",&a);
  if(temp->data==a)
  {  printf("\nKey found.\n");
     start=start->next;
     rear->next=start;
     free(temp);
     printf("Updated list:");
     display();
  } 
  else
  { while(temp->next->next!=start)
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
      temp->next=start; 
      printf("Updated list:");
     display();
    }
    else
      printf("\nKey not found.\n");
  }
}
int main()
{ node *rear=start;
  printf("Search Operation in Circular Linked List .\n");
 rear=insertion(7,rear);
 rear=insertion(9,rear);
 rear=insertion(70,rear);
 rear=insertion(27,rear);
 rear=insertion(33,rear); 
 printf("\nList Elements:\n");
 display();
 search(rear);
 return 0;
}
