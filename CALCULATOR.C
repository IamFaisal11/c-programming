#include<stdio.h>
int main()
{    int x, y ,z, v; 
     printf("enter the integer");
     scanf("%d %d",&x,&y);
     printf("Enter 1 for addition, 2 for subtraction, 3 for multiplaction , 4 for division");
     scanf("%d", &v);
     switch(v)
     {
               case 1:
             z=x+y;
               printf("the sum of %d and %d is %d",x,y,z);
               break;
           
     
     
             case 2:
             z=x-y;
               printf("the subtraction of %d and %d is %d",x,y,z);
               break;
               
               
               
      
      
            case 3:
             z=x*y;
               printf("the product of %d and %d is %d",x,y,z);
               break;
               
               
               
               case 4:
                z=x/y;
               printf("the divion of %d and %d is %d",x,y,z);
               break;
               
               defualt:
               printf("invaild option");
      
      
     }
}
      
      
      
      
      
