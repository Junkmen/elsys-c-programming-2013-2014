#include <stdio.h>

int main() 
{
	int n=21,j,i,sum=0,div=1;
	
	do {
		scanf("%d",&n);
	} while (n<0 || n>20);

	for (i=1;i<n;i++)
	{
		for (j = 1; j < i;j++) 
		{
			div = div*j;
		}
		sum = sum + 1/div;	
	}
	printf("%d\n",sum);
	return 0;
}
