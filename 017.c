#include <stdio.h>

int numLetters(int n) {
	
	if (n == 1000) return 11;
	else if (n == 0) return 4;
	
	int amounts1[10] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4};//0-9
	int amounts2[10] = {3, 6, 6, 8, 8, 7, 7, 9, 8, 8};//10-19
	int amounts3[10] = {0, 0, 6, 6, 5, 5, 5, 7, 6, 6};//20, 30, 40, etc.
	
	int ones = 0, tens = 0, hundreds = 0;
	ones = n % 10;
	n /= 10;
	tens = n % 10;
	n /= 10;
	hundreds = n % 10;
	
	int count = 0;
	if (tens == 1) count += amounts2[ones];
	else count += amounts1[ones];
	if (tens > 1) count += amounts3[tens];
	if (hundreds > 0) {
		count += amounts1[hundreds] + 7;
		if (!(tens == 0 && ones == 0)) count += 3;
	}
	
	return count;
}

int main() {
	
	int total = 0;
	for (int i = 1; i <= 1000; i++) {
		total += numLetters(i);
	}
	printf("%d\n", total);
	
	return 0;
}
