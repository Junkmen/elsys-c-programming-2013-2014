#include <stdio.h>

int main()
{
	int input[4][4],output[4][4],i,j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d",&input[i][j]);
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			output[j][i] = input[i][j];
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ",output[i][j]);
		}
	printf("\n");
	}



	return 0;
}
