#include <stdio.h>
int main(){
    
    int size, i, j, swap;

    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[i];

    printf("Enter the array elements: ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size-1; i++){
        for(j=0; j<size-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
            }
        }
    }

    printf("Sorted list in ascending order: \n");
    for(i=0; i<size; i++){
        printf("%d\n", arr[i]);
    }

    return 0;

}