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
	int max = 2000000;
	long long sum = 0;
	int i;
	for (i=0; i<=max; i++) {
		if (isprime(i) == 1) {
			sum += i;
			}
	}
	printf("%lu\n", sum);
}
