#include <stdio.h>
void encrypt(char *a);
void decrypt(char *a);
int main()
{
 	char input[13]; int i,j;
 	scanf("%s",input);

	for (i = 0;i<13;i++) encrypt(&input[i]);

	for (i = 0;i < 13; i ++) {
		for (j = 1; j < 13; j++) {
			if (input[j-1] > input[j])
			 {
				char swap = input[j];
				input[j] = input[j-1];
				input[j-1] = swap;
			}
		}
	
	}
	for (i = 0;i<13;i++) decrypt(&input[i]);
	printf("%s\n",input);



	return 0;
}

void encrypt(char *a) {
	switch (*a) {
		case 'T': *a=100; break;
		case 'J': *a=101; break;
		case 'Q': *a=102; break;
		case 'K': *a=103; break;
		case 'A': *a=104; break;
	}
}
void decrypt(char *a) {
	switch (*a) {
		case 100: *a='T'; break;
		case 101: *a='J'; break;
		case 102: *a='Q'; break;
		case 103: *a='K'; break;
		case 104: *a='A'; break;
	}
}
