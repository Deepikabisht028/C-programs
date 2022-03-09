#include <stdio.h>
#include <stdlib.h>

int evenswapcount(int N[],int s)
{  int l=0;
   for(int i=0;i<s;i++)
   {  int m=0,p=0,n=N[i];
      if(N[i]%2!=0)
      { while(n>0)
        {
           n=n/10;
           p++;
        }
        n=N[i];
        int a[p];
        while(n>0)
        {
           a[m]=n%10;
           n=n/10;
           m++;
        }
        for(int f=0;f<m;f++)
        {
           if(a[f]%2==0)
           {
                l+=f;
                m=-2;
           }
        }
        if(m!=-2)
          l+=-1;
      }
   }
   return l;
}

int main()
{   int s;
    printf("Enter the size of array:");
    scanf("%d",&s);
    int N[s];
    printf("Enter the array:");
    for(int i=0;i<s;i++)
        scanf("%d",&N[i]);
    int c=evenswapcount(N,s);
    printf("%d",c);
    return 0;
}
