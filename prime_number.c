/*
 ============================================================================
 Name        : prime_number.c
 Author      : Dell
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i = 0, j, m, count = 53;// only need to change the value of count
	int prime_num[count];

	while (i <= count) {
		prime_num[i] = i;
		i++;
	}

	int k,init_count=count;

	for (i = 2; i <= count; i++) {

		j = i + 1;
		for (m = i; m <= count; m++) {

			if (prime_num[m] % prime_num[i] != 0) {
				prime_num[j] = prime_num[m];
	/*			printf("%d being saved \t", prime_num[j]);
				printf("%d value of m inside \t", m);
				printf("%d value of i inside \t", i);
				printf("%d value of j inside \n", j);
	*/			j++;
			}
			/*printf("\n %d value of m \t", m);
			printf("%d value of i \t", i);
			printf("%d value of j \n", j);*/
		}

		while (j <= init_count) {
			if (i == j - 1) {
			//	printf("%d in while!\n", j);
				goto free;
			} else {
				count = j;
				prime_num[j] = 0;
				j++;
			}
		}

	}
free:
	for (k = 0; k <= count; k++) {
		if(prime_num[k]!=0 && prime_num[k]!=1)
		printf("%d \n", prime_num[k]);

	}

	return 0;
}
