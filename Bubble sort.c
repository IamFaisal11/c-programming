#include<stdio.h>
void bsort(int[],int);
int main()
{
    int i,a[100], n;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array before sorting\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    
    bsort(a, n);
}
void bsort(int x[],int s)
{
    int t, i, j;
    for(i=0;i<s-1;i++)
    {
   for(j=0;j<s-1;j++)
   
      { if(x[j]>x[j+1])
       
     { t = x[j];
           x[j] = x[j+1];
           x[j+1] = t;
   
     }
      }
    }
    printf("\narray after sorting");
    for(i=0;i<s;i++)
    printf("\n%d",x[i]);
   
}
