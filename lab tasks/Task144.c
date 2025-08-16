#include <stdio.h>
int main() {
    int a, b;
    for (; scanf("%d %d", &a, &b) == 2; ) {
        if (a == 2 && b == 2) {
            printf("Both values are 2\n");
        } else {
            printf("%d\n", a > b ? a - b : b - a);
        }
    }
    return 0;
}
