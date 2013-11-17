#include <stdio.h>

int main()
{
	int n,value_holder,counter,value_holder2,value_holder3;

	do {
		scanf("%d",&n);
	} while (n<=0 || n >=100);
	
	value_holder = n;
	while (n!=0) {
		n /= 10;
		counter++;
	}

		n = value_holder;
		value_holder2 = n % 10;
		n /= 10;
		value_holder3 = n % 10;

	if (counter == 1) {
		switch (value_holder) {
				case 1:printf("edno\n"); break;
				case 2:printf("dve\n"); break;
				case 3:printf("tri\n"); break;
				case 4:printf("chetiri\n"); break;
				case 5:printf("pet\n");	break;
				case 6:printf("shest\n"); break;
				case 7:printf("sedem\n"); break;
				case 8:printf("osem\n"); break;
				case 9:printf("devet\n"); break;
			}
	}
	 else { 
	 	if (value_holder3 == 1) {
			switch (value_holder2) {
				case 1:printf("edinadeset\n"); break;
				case 2:printf("dvanadeset\n"); break;
				case 3:printf("trinadeset\n"); break;
				case 4:printf("chetirinadeset\n"); break;
				case 5:printf("petnadeset\n");	break;
				case 6:printf("shestnadeset\n"); break;
				case 7:printf("sedemnadeset\n"); break;
				case 8:printf("osemnadeset\n"); break;
				case 9:printf("devetnadeset\n"); break;
				case 0:printf("deset\n"); break;
				} 
		}	else {
				switch (value_holder3) {
				case 2:printf("dvadeset"); break;
				case 3:printf("trideset"); break;
				case 4:printf("chetirideset"); break;
				case 5:printf("petdeset");	break;
				case 6:printf("sheiset"); break;
				case 7:printf("sedemdeset"); break;
				case 8:printf("osemdeset"); break;
				case 9:printf("devetdeset"); break;
				}
				switch (value_holder2) {
				case 2:printf(" i dve\n");   break;
				case 3:printf(" i tri\n");   break;
				case 4:printf(" i chetiri\n"); break;
				case 5:printf(" i pet\n");   break;
				case 6:printf(" i shest\n"); break;
				case 7:printf(" i sedem\n"); break;
				case 8:printf(" i osem\n");  break;
				case 9:printf(" i devet\n"); break;
			}

		}      
	
	
	}
		
	return 0;
}
