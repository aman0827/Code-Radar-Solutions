#include <stdio.h>

int main() {
    int n, target, found = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("%d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("-1\n");
    }
    return 0;
}
