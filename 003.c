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
	long n = 600851475143;
	for (long i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0 && isPrime(i)) printf("%ld\n", i);
	}
	return 0;
}
