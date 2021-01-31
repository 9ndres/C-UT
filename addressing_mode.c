#include <stdio.h>
#include <stdlib.h>

int main(void) {
int sbar = 0, base_address, index_register, multiplier;
printf("base_address: ");
scanf("%d", &base_address);
printf("index_register: ");
scanf("%d", &index_register);
printf("multiplier: ");
scanf("%d", &multiplier);

for ( size_t i = 0; i < index_register; i++ ) {
	sbar += multiplier;
	}
	printf("%d\n", 
		sbar + base_address);
	return EXIT_SUCCESS;
}
