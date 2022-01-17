#include <stdio.h>

int main() {
	int total = 0;
	int fib1 = 1, fib2 = 1;
	while (fib2 < 4000000) {
		int temp = fib2;
		fib2 = fib1 + fib2;
		fib1 = temp;
		if (fib2 % 2 == 0) {
			total += fib2;
		}
	}
	printf("%d\n", total);
	return 0;
}
