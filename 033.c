#include <stdio.h>
#include <stdbool.h>

bool digitsCancel(int n, int d) {
	if (n % 10 != d/10 ||
		n % 11 == 0 && d % 11 == 0) return false;
	double frac1 = (double)n/d;
	double frac2 = (double)(n/10)/(d % 10);
	return frac1 == frac2;
}

int main() {
	int nProduct = 1, dProduct = 1;
	for (int n = 10; n < 100; n++) {
		for (int d = 10; d < 100; d++) {
			if (digitsCancel(n, d)) {
				printf("yo %d %d\n", n, d);
				nProduct *= n;
				dProduct *= d;
			}
		}
	}
	printf("%d %d\n", nProduct, dProduct);
	return 0;
}
