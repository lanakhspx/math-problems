#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 5;
    int y = 2;
    int z = multiply(x, y);
    printf("%d\n", z);
    return 0;
}

int multiply(int a, int b) {
    return a * b;
}
