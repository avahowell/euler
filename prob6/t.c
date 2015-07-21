#include <stdio.h>

int main()
{
	int i;
	int sumsquare = 0;
	int squaresum;
	int sum = 0;
	for(i=0; i<=100; i++) {
		sumsquare += i*i;
	}
	for(i=1; i<=100; i++) {
		sum += i;
	}
	squaresum = sum*sum;
	int sumdiff = squaresum-sumsquare;
	printf("%d\n", sumdiff);
}	
