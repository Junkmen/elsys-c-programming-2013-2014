#include<stdio.h>

int main() 
{
	int input,helper = 0;
	int numbers[10];
	for (helper = 0; helper < 10;numbers[helper] = 0,helper++);
	scanf("%d",&input);

	while (input != 0) {
		helper = input % 10;
		numbers[helper]++;
		input /= 10;	
	}
	for (helper = 0; helper < 10; helper ++) {
		printf("%d:%d\n",helper,numbers[helper]);
	}

return 0;
}
