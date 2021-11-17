#include<stdio.h>
void push(int stack[],int *top)
{ if(*top==4)
     printf("Overflow.\n");
  else
  {  *top+=1;
     printf("Enter the item:");
     scanf("%d",&stack[*top]);
  }
}
void pop(int stack[],int *top)
{ if(*top==-1)
     printf("Underflow.\n");
   else
   {   printf("Deleted Element:%d\n",stack[*top]);
       *top-=1;
   }
}
void seek(int stack[],int top)
{ if(top==-1)
     printf("Empty Stack.\n");
   else
     printf("Topmost element :%d\n",stack[top]);
}
void display(int stack[],int top)
{   if(top==-1)
     printf("Empty Stack.\n");
   else
   {   printf("Stack Elements:\n");
       for(;top>=0;top--)
         printf("%d\n",stack[top]);
   }
}
int main()
{  int c,top=-1,stack[5];
   printf("Stack Implementation Using Array");
   do{printf("\n1).Push\n2).Pop\n3).Seek\n4).Display\n0).Exit\n");
      printf("\nEnter your choice: ");
      scanf("%d",&c);
      switch(c)
      { case 0: break;
        case 1: push(stack,&top); break;
        case 2: pop(stack,&top);  break;
        case 3: seek(stack,top); break;
        case 4: display(stack,top);  break;
        default: printf("\n **Invalid Choice**\n");
      }
    }while(c);
    return 0;
 }
