#include <stdio.h>
#include "euler.h"

int main() {
	int *digits = getDigits(218368);
	for (int i = 0; i < 10; i++) {
		printf("%d\n", *(digits + i));
	}
	return 0;
}
