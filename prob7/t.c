#include <stdio.h>

int isprime(int num) {
	if (num <= 1) {
		return 0;
	}
	
	int i;
	for (i=2; i*i<=num; i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int nthprime = 2000000;
	int primecount = 0;
	int i = 0;
	while(1) {
		i++;
		int primecheck = isprime(i);
		if (primecheck == 1) {
			primecount++;
		}
		if (primecount == nthprime) {
			printf("%dth prime is %d\n", nthprime, i);
			break;
		}
	}
}
