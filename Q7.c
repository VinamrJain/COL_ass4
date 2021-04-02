#include <stdio.h>
#include <math.h>
int sum(int x){
int add = 0;
int t = x;
while (t>0)
{
	add += t%10;
	t /=10; 
}
return add;
}
int num(int x){
	int z = 0;
	for (int i = sum(x); i <=x; i++)
	{
		if (i%sum(x)==0)
		{
			z++;
		}
		
	}
	return z;
}
void main() {
int n;
scanf("%d",&n);
int add = 0;
for (int x = 1; x <= n; x++)
{
	add += num(x);
}
printf("%d",add);
}