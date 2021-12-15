#include<stdio.h>
#include<stdlib.h>
void reverse(int *r,int N,int n)
{ if(n>N)
    return;
  else
  { int a=r[n];
    r[n]=r[N];
    r[N]=a;
    reverse(r,N-1,n+1);
  }
}
int main()
{     int N;
      printf("Enter the value of N:");
      scanf("%d",&N);
      int *a=(int*)malloc(sizeof(int)*N);
      if(a==NULL)
      { printf("Memory allocation failed.\n");
        return 0;
      }
      printf("Enter the array: ");
      for(int i=0;i<N; i++)
          scanf("%d", &a[i]); 
      printf("Reversed Array:");
      reverse(a,N-1,0);
      for(int i=0;i<N; i++)
          printf("%d ",a[i]); 
      return 0;
}
