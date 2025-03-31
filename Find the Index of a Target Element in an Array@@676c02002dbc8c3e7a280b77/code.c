#include <stdio.h>
int main() {
    int n, t, a[100], i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &t);
    for (i = 0; i < n; i++) if (a[i] == t) { printf("%d\n", i); return 0; }
    printf("-1\n");
    return 0;
}
