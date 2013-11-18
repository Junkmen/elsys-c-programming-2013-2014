#include <stdio.h>

int main() 
{
	int j,i,n=21; float sum=0,div=1;
	
	
		scanf("%d",&n);
	if (n>=0 && n<=20)
	{
		for (i=1;i<=n;i++)
		{
			div = 1;
			for (j = 1; j <= i;j++) 
			{
				div = div*j;
			}
			sum = sum + 1/div;	
		}
	}
	printf("%f",sum);
	return 0;
}
