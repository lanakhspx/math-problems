#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int number1 = rand() % 10 + 1;
    int number2 = rand() % 10 + 1;
    int sum = number1 + number2;
    printf("%d + %d = ", number1, number2);
    scanf("%d", &sum);
    if (sum == number1 + number2) {
        printf("Correct! You got it right.\n");
    } else {
        printf("Incorrect. The answer is %d\n", sum);
    }
}
