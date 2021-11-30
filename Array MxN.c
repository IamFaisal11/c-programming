#include<stdio.h>
int main()
{
	int a[10][10];
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
}
