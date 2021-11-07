#include <stdio.h>
int main()
{   int i,j,N;
    printf("Enter the range:");
    scanf("%d %d",&i,&N);
    printf("Prime no. b/w %d and %d :",i,N);
        for(;i<=N;i++)
        {   int c=0;
            for(j=1;j<=i;j++)
                if(i%j==0)
                    c++;
                  
            if(c==2)
               printf("%d ",i);
        }
   return 0;
}