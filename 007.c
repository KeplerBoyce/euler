#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(long n) {
	if (n % 2 == 0) return false;
	for (long i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int numPrimes = 1;
	long n = 3;
	while (numPrimes < 10001) {
		if (isPrime(n)) numPrimes++;
		if (numPrimes == 10001) break;
		n += 2;
	}
	printf("%ld\n", n);
	return 0;
}
