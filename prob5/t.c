#include <stdio.h>

#define MAXNUM 1000000000

int main()
{
	int i;
	int i2;
	int divcount;
	for(i=1; i<=MAXNUM; i++) {
		for(i2=1;i2<20;i2++) {
			if(i % i2 == 0) {
				divcount++;
			}
		}
		if(divcount == 19) {
			printf("%d\n", i);
			break;
		} else {
			divcount = 0;
		}
	}
}
