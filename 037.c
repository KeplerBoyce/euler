#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
	if (n == 2) return true;
	else if (n % 2 == 0 || n == 1) return false;
	else {
		for (int i = 3; i <= sqrt(n); i += 2) {
			if (n % i == 0) return false;
		}
	}
	return true;
}

bool isTruncatable(int n) {
	if (!isPrime(n)) return false;
	char str[7];
	snprintf(str, 7, "%d", n);
	int digits[6];
	int size;
	for (int i = 0; i < 7; i++) {
		if (str[i] == 0) {
			size = i;
			break;
		}
		digits[i] = str[i] - '0';
		if (digits[i] == 0) return false;
	}
	for (int i = 1; i < size; i++) {
		int num = 0;
		for (int j = i; j < size; j++) {
			num *= 10;
			num += digits[j];
		}
		if (!isPrime(num)) return false;
		num = 0;
		for (int j = 0; j < size - i; j++) {
			num *= 10;
			num += digits[j];
		}
		if (!isPrime(num)) return false;
	}
	return true;
}

int main() {
	int sum = 0;
	for (int i = 10; i < 1000000; i++) {
		if (isTruncatable(i)) {
			printf("%d\n", i);
			sum += i;
		}
	}
	printf("sum: %d\n", sum);
	return 0;
}
