#include <stdio.h>
unsigned concatenate( unsigned x, unsigned y) {
	unsigned pow = 10;
	while( y >= pow )
		pow *= 10;
	return x * pow + y;
}

int main(void) {
	unsigned a, b;
	scanf("%u %u", &a, &b);
	int c = concatenate( a, b);
	printf("%d\n", c);
	return 0;
}


