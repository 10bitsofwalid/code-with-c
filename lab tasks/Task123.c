#include<stdio.h>
int main() {
    int n;
    printf("Enter the number of size: ");
    scanf("%d", &n);
    int arr[n], product=1;
    
    printf("Enter array elements:\n");
    for(int i=0; i<n;i++) {
        printf("A[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Printing array elements:\n");
    for(int i=0; i<n;i++) {
        printf("%d ", arr[i]);
        product= product * arr[i];
    }
    printf("\nMultiplication arrays: %d\n", product);

    return 0;

}