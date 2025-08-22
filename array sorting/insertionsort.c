#include <stdio.h>

void insertion_sort(int arr[], int n){
    int i, j, key;

    //loop for the second element
    for (i=1; i<n; i++){
        key = arr[i]; //element to be inserted
        j = i-1;
        
        //shit elements one position right, which are greater then the key
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j]; //right shift
            j = j - 1;
        }
        arr[j+1] = key; //place the key in correct position
    }
}

int main(){

    int n;
    printf("Enter the size for the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements for the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Main array: ");
    for(int i=0; i<n; i++){
        printf(" %d ", arr[i]);
    }

insertion_sort(arr, n);
printf("\nSorted array: ");
for(int i=0; i<n; i++){
    printf(" %d ", arr[i]);
}

printf("\n");
return 0;

}