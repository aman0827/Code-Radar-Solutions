#include <stdio.h>

int main() {
    char name[100];
    int age;
    char hobby[100];

    printf("Enter name, age, and hobby: ");
    scanf("%s %d %s", name, &age, hobby);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}