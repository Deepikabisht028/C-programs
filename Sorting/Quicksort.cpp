#include <iostream>

using namespace std;
void swap_ele(int *a,int *b)
{  int c=*a;
   *a=*b;
   *b=c;
}

int partition_(int a[],int l,int h)
{  int p=a[h],i=l-1;
    for(int j=l;j<h;j++)
    {  if(a[j]<p)
       {  i++;
          swap_ele(&a[i],&a[j]);
       }
    }
    swap_ele(&a[i+1],&a[h]);
    return (i+1);
}

void quicksort(int a[],int l,int h)
{
    if(l<h)
    {  int pivot=partition_(a,l,h);
       quicksort(a,l,pivot-1);
       quicksort(a,pivot+1,h);
    }

}
int main()
{   int a[]={1,18,4,9,5,0};
    int n=sizeof(a)/sizeof(a[0]);
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
