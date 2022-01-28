#include <stdio.h>

int numSolutions(int n) {
	int count = 0;
	for (int a = 1; a < n; a++) {
		for (int b = 1; b <= n-a; b++) {
			int c = n-(a+b);
			if (a*a + b*b == c*c) count++;
		}
	}
	return count;
}

int main() {
	int maxValue = 0;
	int bestNum;
	for (int i = 1; i <= 1000; i++) {
		int num = numSolutions(i);
		if (num > maxValue) {
			maxValue = num;
			bestNum = i;
		}
	}
	printf("%d\n", bestNum);
	return 0;
}
