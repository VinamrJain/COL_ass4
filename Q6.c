#include <stdio.h>
#include <math.h>
int gcd(int x, int y){
if (x<y)
{
	int t =y;
	y = x;
	x = t;
}
while (y != 1 && y != 0)
{
	int t = y;
    y= x%y;
	x = t;
}
if (y == 1)
{
	return 1;
}
else if (y == 0)
{
	return x;
}
}
void main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int x = 0;
	for (int j = a; j <= b; j++)
	{
		for (int i = a; i <= j; i++)
		{
			if (gcd(i,j)>1)
			{
				x++;
			}
			
		}
		
	}
	printf("%d",x);
}