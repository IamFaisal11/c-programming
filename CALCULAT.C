#include<stdio.h>
int main()
{    int x, y, v; 
     printf("enter the integer");
     scanf("%d %d",&x,&y);
     printf("Enter 1 for addition, 2 for subtraction, 3 for multiplaction , 4 for division");
     scanf("%d", &v);
     if(v==1) {
     v=x+y;
     printf("answer = %d");}
else if(v==2)
{
v=x-y;
printf("answer = %d");
      }
  if(v==3)
      {
      v=x*y; printf("answer = %d");
      }
 if(v==4)
      {
      v=x/y;
      printf("answer = %d");
      }
 if(!v==1,!v==2,!v==3,!v==4)
      printf("invalid option");
    
      }
      
      
      
      
      
      
      
      
      
      
      
      
