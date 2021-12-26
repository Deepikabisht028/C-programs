#include<stdio.h>

void insert(int *f,int *r,int *q)
{    if( *f+*r>=5  )
     {   printf("Overflow.\n");
         return;
     }
    printf("Enter the element:");
    if(*f==-1)
    {    *f=*r=0;
          scanf("%d",&(q[*f]));
         
    }
    else
    {   *r=*r+1;
        scanf("%d",&(q[*r]));
    }
}

void dele(int *f,int *q)
{ if(*f==-1||*f==5)
    printf("\nQueue Empty.\n");
  else{
  printf("\nDeleted element:%d\n",q[*f]);
   (*f)++;
  }
     
}

void display(int f,int r,int *q)
{    if(f==-1|| f>r )
       printf("Empty.\n");
     else{
     for(;f<=r;f++)
       printf("%d  ",q[f]);
     }
}

int main()
{   int q[5],c;
    int f=-1,r=-1;
    printf("Linear Queue Operation.");
    do{  printf("\n1: Enqueue\n2: Dequeue\n3: Display\n0: Exit\n");
         printf("Enter your choice:");
         scanf("%d",&c);
         switch(c)
        {  case 0: break; 
           case 1: insert(&f,&r,q);
                   break;
           case 2: dele(&f,q);
                   break;
           case 3: printf("\nQueue:");
                   display(f,r,q);
                   break;
           default: printf("Invalid Option.\n");
        }
    }while(c);
    return 0;
}
