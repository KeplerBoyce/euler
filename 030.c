#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool sumWorks(int n) {
	char str[7];
	snprintf(str, 7, "%d", n);
	int sum = 0;
	for (int i = 0; i < 6; i++) {
		if (str[i] != 0) {
			int a = str[i] - '0';
			sum += a*a*a*a*a;
		}
	}
	printf("%d %d\n", n, sum);
	return sum == n;
}

int main() {
	int sum = 0;
	for (int i = 10; i < 1000000; i++) {
		if (sumWorks(i)) sum += i;
	}
	printf("%d\n", sum);
	return 0;
}
