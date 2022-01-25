#include <stdio.h>

int main() {
	int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int dayOfWeek = 0;
	int count = 0;
	for (int y = 1900; y <= 2000; y++) {
		for (int m = 0; m < 12; m++) {
			int limit = daysPerMonth[m];
			if (m == 1 && y % 4 == 0 && !(y % 100 == 0 && y % 400 != 0)) {
				limit++;
			}
			for (int d = 0; d < limit; d++) {
				dayOfWeek++;
				dayOfWeek %= 7;
				if (y > 1900 && dayOfWeek == 6 && d == 0) count++;
			}
		}
	}
	printf("%d\n", count);
	return 0;
}
