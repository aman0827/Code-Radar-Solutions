#include <stdio.h>

int main() {
    int num1, num2, num3;
    double average; // Use double for accurate average
    scanf("%d %d %d", &num1, &num2, &num3);
    average = (double)(num1 + num2 + num3) / 3; // Calculate average
    printf("Average: %.2lf\n", average); // Print with 2 decimal places

    return 0;
}