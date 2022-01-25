#include <stdio.h>
#include <stdbool.h>

int sumFactors(int n) {
	int sum = 1;
	for (int i = 2; i <= n/2; i++) {
		if (n % i == 0) sum += i;
	}
	return sum;
}

int main() {
	int total = 0;
	for (int i = 1; i < 10000; i++) {
		if (sumFactors(sumFactors(i)) == i && sumFactors(i) != i) total += i;
	}
	printf("%d\n", total);
	return 0;
}
