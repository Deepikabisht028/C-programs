#include <iostream>

using namespace std;

void mergeit(int a[],int l,int m,int h)
{   int c[m-l+1],d[h-m];
    int k=0,p=0,x=l;
    for(int i=l;i<=m;i++)
    { c[k]=a[i];
      k++;
    }
    for(int i=m+1;i<=h;i++)
    { d[p]=a[i];
      p++;
    }
    int i=0,j=0;
    while(i<k && j<p)
    {  if(c[i]<=d[j])
       {  a[x]=c[i];
           i++;

       }
       else
       { a[x]=d[j];
           j++;
       }
       x++;
    }
    while(i<k)
    {   a[x]=c[i];
           i++;
           x++;
    }
    while(j<p)
    {   a[x]=d[j];
           j++;
           x++;
    }

}
void mergesort(int a[],int l,int h)
{ if(l<h)
   {  int m=(l+h)/2;
      mergesort(a,l,m);
      mergesort(a,m+1,h);
      mergeit(a,l,m,h);
   }

}
int main()
{  int a[5]={6,19,9,0,12};
    mergesort(a,0,4);
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
    return 0;
}
