#include <stdio.h>
int main() {
    int n, i;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);
    int array[n];
    printf("Input %d number of elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("\nThe values stored into the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\nThe values stored into the array in reverse are:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    return 0;
}