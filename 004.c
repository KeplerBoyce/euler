#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int n) {
	int reverse = 0, num = n, remainder;
	while (num > 0) {
		remainder = num % 10;
		reverse = reverse * 10 + remainder;
		num /= 10;
	}
	if (n == reverse) return true;
	else return false;
}

int main() {
	int largest = 0;
	for (int i = 1; i < 1000; i++) {
		for (int j = 1; j < 1000; j++) {
			if (isPalindrome(i*j) && i*j > largest) largest = i*j;
		}
	}
	printf("%d\n", largest);
	return 0;
}
