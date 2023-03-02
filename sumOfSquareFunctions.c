#include <stdio.h>
float area(float s) {
    return s * s;
}

int main() {
    float side, a;
    printf("Enter the length of a side: ");
    scanf("%f", &side);
    a = area(side);
    printf("Area of the square: %.2f", a);
    return 0;
}