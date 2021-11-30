#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],sum[10][10];
	int i,j,n;
	printf("enter the size of array \n");
	scanf("%d",&n);
	printf("\n enter the elements rowwise \n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
		for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t ",a[i][j]);
		}
		printf("\n");
		
		
	}
	
		printf("\nenter the elements rowwise\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
		for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t ",b[i][j]);
		}
		printf("\n");
		
		
	}
	
	
	
		for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
	      	sum[i][j]=a[i][j]+b[i][j];
	        	{
	        		
		            	printf("%d\t ",sum[i][j]);
		        
				}
		}
		printf("\n");
		
		
	}
}
