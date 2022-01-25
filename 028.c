#include <stdio.h>

int main() {
	int sum = 1, num = 1, gap = 2;
	while (gap < 1001) {
		for (int i = 0; i < 4; i++) {
			num += gap;
			sum += num;
		}
		gap += 2;
	}
	printf("%d\n", sum);
	return 0;
}
