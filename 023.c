#include <stdio.h>
#include <stdbool.h>

bool isAbundant(int n) {
	int factorSum = 1;
	for (int i = 2; i <= n/2; i++) {
		if (n % i == 0) factorSum += i;
	}
	return factorSum > n;
}

int main() {
	bool abundantNums[28124];
	for (int i = 1; i <= 28123; i++) {
		abundantNums[i] = isAbundant(i);
	}
	int total = 0;
	for (int i = 1; i <= 28123; i++) {
		bool can = false;
		for (int j = 1; j <= i/2; j++) {
			if (abundantNums[j] && abundantNums[i - j]) {
				can = true;
			}
		}
		if (!can) total += i;
	}
	printf("%d\n", total);
	return 0;
}
