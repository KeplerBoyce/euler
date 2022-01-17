#include <stdio.h>

int main() {
	int sumofsqrs = 0, sqrofsum = 0;
	for (int i = 1; i <= 100; i++) {
		sumofsqrs += i * i;
		sqrofsum += i;
	}
	sqrofsum *= sqrofsum;
	printf("%d\n", sqrofsum - sumofsqrs);
	return 0;
}
