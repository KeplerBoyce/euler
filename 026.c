#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cycleLength(int n) {
	long double reciprocal = (long double)1/n;
	char str[64];
	snprintf(str, 64, "%.64g", nextafter(reciprocal, 0.0));
	for (int i = 10; i < 50; i++) {
		printf("%c %c\n", str[i], str[9]);
		if (str[i] == str[9] && str[i + 1] == str[10]
			&& str[i + 2] == str[11]) return i - 9;
	}
	return 0;
}

int main() {
	int longest = 0;
	int bestNum;
	for (int i = 1; i < 1000; i++) {
		int cycle = cycleLength(i);
		if (cycle > longest) {
			longest = cycle;
			bestNum = i;
		}
	}
	printf("%d %d\n", bestNum, longest);
	return 0;
}
