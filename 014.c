#include <stdio.h>

int collatz(long n, int length) {
    if (n == 1) return length;
    else if (n % 2 == 0) return collatz(n/2, length + 1);
    else return collatz(3*n + 1, length + 1);
}

int main() {
    int maxLength = 0;
    int startingNum = 0;
    for (int i = 1; i < 1000000; i++) {
        int length = collatz(i, 0);
        if (length > maxLength) {
            maxLength = length;
            startingNum = i;
        }
    }
    printf("%d\n", startingNum);
    return 0;
}
