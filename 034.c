#include <stdio.h>

int factorial(int n) {
	if (n == 0) return 1;
	else return n*factorial(n - 1);
}

int main() {
	int totalSum = 0;
	for (int i = 10; i < 10000000; i++) {
		char str[8];
		snprintf(str, 8, "%d", i);
		int sum = 0;
		for (int j = 0; j < 8; j++) {
			int digit = str[j] - '0';
			if (digit >= 0) sum += factorial(digit);
		}
		if (sum == i) totalSum += i;
	}
	printf("%d\n", totalSum);
	return 0;
}
