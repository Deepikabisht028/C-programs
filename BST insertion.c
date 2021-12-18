#include<stdio.h>
#include<stdlib.h>
typedef struct tree
{  int data;
   struct tree *left,*right;
}tree;

void insert(tree **root,int key)
{      
      if((*root)==NULL)
      { tree *node=(tree*)malloc(sizeof(tree));
         if(node==NULL)
         { printf("Memory Allocation Failed");
         return; 
         }
         node->data=key;
         node->left=node->right=NULL;
         *root=node; 
      }
        
           
       else if((*root)->data > key )
            insert(&((*root)->left),key);
             
       else if((*root)->data < key)
           insert(&((*root)->right),key);
          
}

void display(tree *root)
{   if(root!=NULL)
    {  display(root->left);
       printf("%d ",root->data); 
       display(root->right);
    }
     
}

int main()
{  int c,key;
  tree *root=NULL;
   printf("Enter the no. of nodes you want :");
   scanf("%d",&c);
   for(int i=0;i<c;i++)
    {    printf("Enter the value :");
         scanf("%d",&key);
         insert(&root,key); 
    }
   
   display(root);
   return 0;  
}
