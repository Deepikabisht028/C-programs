#include<stdio.h>
#include<stdlib.h>
typedef struct node
{   int data;
    struct node *next,*prev;
}node;
void insertion(node **start,int a)
{     node *newnode,*temp;
      newnode=(node*)malloc(sizeof(node));
      if(newnode==NULL)
      { printf("Memory Not allocated.\n");
         return;  }
       newnode->data=a;
       newnode->next=NULL;    
       newnode->prev=NULL;
       if(*start==NULL)
         *start=temp=newnode;
       else  
       {  temp->next=newnode;
          newnode->prev=temp;
          temp=newnode;
       }
}
void display(node *start)
{  if(start==NULL)
    {  printf("List Empty.\n");
       return; 
    }
    for( node *temp=start ; temp!=NULL ; temp=temp->next)
       printf("%d ",temp->data);
    printf("\n");
}
void palindrome(node *start)
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
{    node *start=NULL;
     insertion(&start,5);
     insertion(&start,6);
     insertion(&start,0);
     insertion(&start,2);
     insertion(&start,3);  
     printf("Doubly Linked List\n");
     display(start);
     palindrome(start);
     //New list
     start=NULL;
     insertion(&start,7);
     insertion(&start,9);
     insertion(&start,70);
     insertion(&start,27);
     insertion(&start,70);
     insertion(&start,9);
     insertion(&start,7); 
     printf("\n\nDoubly Linked List\n");
     display(start);
     palindrome(start);
     return 0;
}
