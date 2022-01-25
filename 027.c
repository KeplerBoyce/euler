#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
	n = n < 0 ? -n : n;
	if (n % 2 == 0) return false;
	for (int i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0) return false;
	}
	return true;
}

int primeChainLength(int a, int b) {
	int n = 0;
	bool chain = true;
	while (chain) {
		if (isPrime(n*n + a*n + b)) n++;
		else chain = false;
	}
	return n;
}

int main() {
	int maxChain = 0;
	int bestA, bestB, bestProduct;
	for (int a = -999; a < 1000; a++) {
		for (int b = -1000; b <= 1000; b++) {
			int chain = primeChainLength(a, b);
			if (chain > maxChain) {
				maxChain = chain;
				bestA = a;
				bestB = b;
				bestProduct = a*b;
			}
		}
	}
	printf("%d %d %d %d\n", bestA, bestB, bestProduct, maxChain);
	return 0;
}

