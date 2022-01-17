#include <stdio.h>
#include <stdbool.h>

bool isSolution(int n) {
	for (int i = 2; i <= 20; i++) {
		if (n % i != 0) return false;
	}
	return true;
}

int main() {
	bool found = false;
	int n = 20;
	while (!found) {
		if (isSolution(n)) {
			printf("%d\n", n);
			found = true;
		} else n++;
	}
	return 0;
}
