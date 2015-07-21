#include <stdio.h>

int main() 
{
	int ndigits = 2;
	int i;
	int i2;
	int rev;
	int mod;
	int revprod;
	char prodbuf[64];
	for (i=10; i<100; i++) {
		for(i2=10; i2<100; i2++) {
			int product = i*i2;
			sprintf(prodbuf, product);
			for(i=0; i<=strlen(product); i++) {
				
			if ( revprod == product ) {
				printf("%d made with %d and %d", product, i, i2);
			}
					
	}
		
}
}
