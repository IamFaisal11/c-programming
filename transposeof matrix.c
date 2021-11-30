#include <stdio.h>
int main() 
{
 int a[50][50],b[50][50];
 int i,j,m,n;
  printf("Enter rows and columns: ");
  scanf("%d %d", &m, &n);

  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < m; i++)
  {
      
     for (int j = 0; j < n; j++)
  
     { 
         
      scanf("%d", &a[i][j]);
    
     }
  }
  
  printf("\nEntered matrix: \n");
  for (int i = 0; i < m; ++i)
  {
   
   for (int j = 0; j < m; ++j) 
   {
      printf("%d  ", a[i][j]);
   }
     printf("\n");
}
    
 
  for (int i = 0; i < m; ++i)
  {
  
  for (int j = 0; j < n; ++j) 
  
  {
    
    b[j][i] = a[i][j];
  
  }
}
  
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < m; ++i)
 {
     for (int j = 0; j < n; ++j)
  {
    printf("%d  ", b[i][j]);
  }
  printf("\n");
 }
  return 0;

}
