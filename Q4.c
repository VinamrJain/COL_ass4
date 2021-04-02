#include <stdio.h>
#include <math.h>
int prime(int x){
	if (x==2)
	{
		return x;
	}
	else
	{   int t;
		for (int i = 2; i <= sqrt(x); i++)
	{
		if (x%i==0)
		{  
			return 0;
		}
	}
	return x;
	}
}
void main() {
int n;
scanf("%d", &n);
int i = 2;
int j=0;
while (j < n*n)
{	
	if (prime(i)!=0)
	{
		++j;
		printf("%d ",prime(i));
		if (j%n == 0)
		{
			printf("\n");
		} 	
	}
	i++;	
}
}