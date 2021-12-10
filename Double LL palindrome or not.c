#include<stdio.h>
#include<stdlib.h>
typedef struct node
{   int data;
    struct node *next,*prev;
}node;
node *start=NULL;
void insertion(int a)
{     node *newnode,*temp;
      newnode=(node*)malloc(sizeof(node));
      if(newnode==NULL)
      { printf("Memory Not allocated.\n");
         return;  }
       newnode->data=a;
       newnode->next=NULL;    
       newnode->prev=NULL;
       if(start==NULL)
         start=temp=newnode;
       else  
       {  temp->next=newnode;
          newnode->prev=temp;
          temp=newnode;
       }
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
void palindrome()
{  node *p=start;
   for(;p->next!=NULL;p=p->next);
   for(node* t=start;t!=NULL;t=t->next,p=p->prev)
    {  if(t->data!=p->data)
       { printf("List is Not a Palindrome.\n");
         return;
       }
    }
    printf("List is Palindrome.\n");
}
int main()
{    insertion(5);
     insertion(6);
     insertion(0);
     insertion(2);
     insertion(3);  
     printf("Doubly Linked List\n");
     display();
     palindrome();
     //New list
     start=NULL;
     insertion(7);
     insertion(9);
     insertion(70);
     insertion(27);
     insertion(70);
     insertion(9);
     insertion(7); 
     printf("\n\nDoubly Linked List\n");
     display();
     palindrome();
     return 0;
}
