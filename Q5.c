#include <stdio.h>
#include <math.h>
void main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int x = 0;
	for (int j = a; j <= b; j++)
	{
		for (int i = a; i <= j; i++)
		{
			if (j%i==0)
			{
				x++;
			}
			
		}
		
	}
	printf("%d",x);
}