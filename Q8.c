#include <stdio.h>
#include <math.h>
void main() {
	int n;
	scanf("%d",&n);
	int x =0;
	for (int j = 1; j<=n ; j++)
	{
	for (int i = 0; i < sqrt(j); i++)
	{
		if ( sqrt(j - (i*i)) == (int)sqrt(j - (i*i)) )
		{
			x++;
			break;
		}	
	}
	}
	printf("%d",x);
}