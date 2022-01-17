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
    long total = 2;
    for (int i = 3; i < 2000000; i += 2) {
        if (isPrime(i)) total += i;
    }
    printf("%ld\n", total);
    return 0;
}
