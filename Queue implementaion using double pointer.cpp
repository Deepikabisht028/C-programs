#include <stdio.h>
#include<stdlib.h>
void **Enqueue(void **t,void ***h)
{       if(*h==NULL)
        {   t=*h=(void*)calloc(2,sizeof(void*));
			t[1]=NULL;
		}
		else
		{	t[1]=(void*)calloc(2,sizeof(void*));
            t=t[1];
		}
		t[0]=(int *) malloc (sizeof (int));
        printf("Enter the element:");
        scanf("%d",(int *)t[0]);
        return t;
}
void Front(void **t)
{ if(t==NULL)
    printf("\nQueue is empty.\n");
  else
    printf("Frontmost element of queue : %d\n",*((int*)(t[0])));
}
void **Dequeue(void **p)
{ void **t=NULL;
  if(p==NULL)
   printf("\nQueue Empty\n");
  else
  { t=p[1];
   printf("\nDeleted element:%d\n",*((int*)(p[0])));
   free(p);
  }
  return t;
} 
void Display(void **p)
{  if(p==NULL)
   {  printf("\nQueue Empty\n");
      return; }
    else
    { void **t;
      printf("Queue Element:");
      for(t=p;t!=NULL;t=t[1])
        printf("%d ",*((int *)(t[0])));
      printf("\n");
    }
}
int main()
{ void **head=NULL,**temp=NULL;
  int c;
   printf("Queue Implementation"); 
  do{
     printf("\n1).Enqueue\n2).Dequeue\n3).Front\n4).Display\n0).Exit\n");
     printf("Enter your choice:");
     scanf("%d",&c);
     switch(c)
     {   case 0:break;
         case 1: temp=Enqueue(temp,&head);
                 break;
          case 2:head=Dequeue(head);
                 break;
          case 3:Front(head); 
                  break;
          case 4:Display(head);
                  break;
          default: printf("\nInvalid Option.\n");
       }
     }while(c);
     return 0;
}
 
