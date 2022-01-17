#include <stdio.h>

int count = 0;

void step(int x, int y) {
    if (x < 20) {
        if (y < 20) {
            step(x + 1, y);
            step(x, y + 1);
        } else step(x + 1, y);
    } else if (y < 20) step(x, y + 1);
    else {
        count++;
        return;
    }
}

int main() {
    step(0, 0);
    printf("%d\n", count);
    return 0;
}
