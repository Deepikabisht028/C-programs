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

tree* inordersucc(tree *r)
{  
   while(r->left!=NULL)
   {
        r=r->left;
       
   }
   return r;
     
}

tree *delnode(tree *r,int k)
{   if(r==NULL)
       return r;
     else if(k < r->data)
         r->left=delnode(r->left,k);
     
     else if(k> r->data)
          r->right=delnode(r->right,k);
   
    else {
         if(r->left==NULL)
         {  
             tree *a=r->right;
             free(r);
             return a;
         }
         else if(r->right==NULL)
         {  
             tree *a=r->left;
             free(r);
             return a;
         }
         
         tree *p=inordersucc(r->right);
         r->data=p->data;
         r->right=delnode(r->right,p->data);
        
    }
     return r;
     
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
    printf("\nTree :");
    display(root);
    
    for(int i=0;i<4;i++)
    {    printf("\nEnter the node to be deleted :");
         scanf("%d",&key);
         root=delnode(root,key); 
         
         printf("\nTree after deletion:\n");
        display(root);
    }
   
   return 0;  
}
