#include <stdio.h>

int main() {
	int i, m, m1, m2, m3,x,y,z,sum = 0;
	int success = 0; int success_numbers[3];
	scanf("%d %d %d %d",&m1, &m2, &m3, &m);     
x = 0; y = 0; z = 0;
do {
 if (success==1){ break; }
 x = 0;
 y = 0; 

	do { if (success==1){ break;}
		x = 0;

			do {

				sum = (x*1)+(y*2)+(z*5);
	//Don't mind this, debugging purpouses 	printf("%d\n",sum);
				if (sum == m) {
					printf("Yes: %d %d %d\n", x, y, z);
					success = 1;
					break;
				}
				++x;
			} while (x <= m1);
 		++y;
	} while (y <= m2);
 ++z;
} while (z <= m3);
	if (!success) { 
		printf("No\n");
	}
return 0;
}
