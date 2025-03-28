#include <stdio.h>

int main() {
    float radius, area;
    float pi = 3.14f; // Use 'f' to indicate a float literal
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("Area: %.2f\n", area); // Print with 2 decimal places

    return 0;
}