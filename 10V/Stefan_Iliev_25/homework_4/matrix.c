#include<stdio.h>

int main()
{
	
	int n_numbers, i, j;
	float input_numbers[100], numbers_sum = 0; 
	
 	do
 	{	
 	 scanf("%d",&n_numbers);

 	}while(n_numbers < 0 ||	n_numbers >100);

	for (i=1; i<n_numbers; i++)
	{
		for(j=0; j<n_numbers; j++)
		{
			scanf("%f ",&input_numbers[j]);
			if (j >= i) {
			numbers_sum += input_numbers[j];
			}
		}
		
	}


	
	printf("%f",numbers_sum);


	return 0;
}
