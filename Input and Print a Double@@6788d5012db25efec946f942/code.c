#include <stdio.h>

int main() {
    double num;
    scanf("%lf", &num); // Note: %lf is used for doubles in scanf
    printf("You entered: %.4lf\n", num); // %.4lf for 4 decimal places
    return 0;
}