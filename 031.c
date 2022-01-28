#include <stdio.h>

void nextCoin(int *ways, int coins[], int index, int total) {
	if (total == 200) {
		*ways = *ways + 1;
		return;
	} else if (index == -1) return;
	else {
		int coin = coins[index];
		for (int i = 0; i <= (200-total)/coin; i++) {
			nextCoin(ways, coins, index - 1, total + coin*i);
		}
	}
}

int main() {
	int coins[8] = {1, 2, 5, 10, 20, 50, 100, 200};
	int ways = 0;
	int *w = &ways;
	nextCoin(w, coins, 7, 0);
	printf("%d\n", ways);
	return 0;
}
