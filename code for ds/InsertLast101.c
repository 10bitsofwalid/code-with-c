#include <stdio.h>
int main(){
    int arr[10], n, i, value;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

        printf("Main array: ");
        for(i=0; i<n; i++)
        printf("%d", arr[i]);
        printf("\n Value if i= %d", i);
        printf("\nEnter the value to insert: ");
        scanf("%d", &value);
        arr[i]=value;

    printf("The array: ");
    for(int i=0; i<n; i++){
        printf("%d", arr[i]);
    }
}