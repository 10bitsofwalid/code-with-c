#include <stdio.h>
int main(){
    int i, index, n;

    //enter the array size
    printf("Enter the array size: ");
    scanf("%d", &n);

    int arr[n];

    //enter the array elements
    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    //take the index for deletation
    printf("Enter the index to del the element: ");
    scanf("%d", &index);

    //logic for delatation
    for(i=index; i<=n-1; i++){
        arr[i]=arr[i+1];
    }

    //print the updated array
    printf("The updated array: ");
    for(i=0; i<n-1; i++){
        printf(" %d ", arr[i]);
    }

}