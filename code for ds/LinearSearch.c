#include <stdio.h>
int main(){

    int size, search, i;

    printf("Enter the size for the array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the elements for the array: ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for(i=0; i<size; i++){
        if(arr[i]==search){
            printf("%d is present at position: %d\n", search, i+1);
            printf("%d is prestent at index: %d\n", search, i);
            break;
        }
    }

    if(i==size){
        printf("%d is not present in the array\n", search);
    }

    return 0;

}