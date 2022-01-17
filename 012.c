#include <stdio.h>

int numFactors(int n) {
    int count = 2;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) count++;
    }
    return count;
}

int main() {
    int n = 1;
    int add = 2;
    while (1 > 0) {
        n += add;
        if (numFactors(n) > 500) {
            printf("%d\n", n);
            return 0;
        }
        add++;
    }
    return 0;
}
