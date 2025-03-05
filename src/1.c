#include <stdio.h>

int main() {
    float side_a = 0.0;
    float side_b = 0.0;
    float area = 0.0;

    printf("Enter the length of the two sides: ");
    scanf("%f%f", &side_a, &side_b);

    area = side_a * side_b;

    printf("The area of the rectangle is %f\n", area);

    return 0;
}
