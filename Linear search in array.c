#include<stdio.h>
int main()
{
    int a[5]={4,5,7,8,10};
    int i,s,flag=0;
    
    printf("enter the element to be found\n");
    scanf("%d",&s);
  
 
 for(i=0;i<=5;i++)
    { 
        if(s==a[i])
    { flag=1;
     printf("element is found on the postion %d",i+1);
    }
    }
    {
      if(flag==0)
     printf("element not found");
     }
}
