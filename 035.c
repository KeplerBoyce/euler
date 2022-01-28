#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
	if (n == 2) return true;
	else if (n % 2 == 0) return false;
	for (int i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0) return false;
	}
	return true;
}

bool isCircular(int n) {
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
	}
	for (int i = 0; i < size; i++) {
		int num = 0;
		for (int j = 0; j < size; j++) {
			num *= 10;
			num += digits[(j + i) % size];
		}
		if (!isPrime(num)) return false;
	}
	return true;
}

int main() {
	int count = 0;
	for (int i = 2; i < 1000000; i++) {
		if (isCircular(i)) {
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
