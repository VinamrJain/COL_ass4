#include <stdio.h>
#include <math.h>
void main() {
	int n;
	scanf("%d",&n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <=4*n-2; j++)
		{
			if (j>=i && j<=2*i-1 || j>=4*n-2 - (i-1+i-1) && j<=4*n-2 - (i-1))
			{
			printf("*");
			}
			else
			{
			printf(" ");
			}
			
		}
		printf("\n");

	}
	for (int i = n; i >= 1; i--)
	{
		for (int j = 4*n-2; j >=1; j--)
		{
			if (j>=i && j<=2*i-1 || j>=4*n-2 - (i-1+i-1) && j<=4*n-2 - (i-1))
			{
			printf("*");
			}
			else
			{
			printf(" ");
			}
			
		}
		printf("\n");
		
	}
	
}