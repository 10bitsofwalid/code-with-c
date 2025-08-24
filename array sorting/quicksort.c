#include <stdio.h>

//pivot placement
int partition(int arr[], int low, int high){
    int pivot = arr[low]; //first element as pivot
    int i = low +1;
    int j = high;

    while (i<=j){
        //find element greater then the pivot
        while(i<=high && arr[i]<=pivot){
            i++;
        }
        //find element smaller then the pivot
        while(j>=low && arr[j]>=pivot){
            j--;
        }
        //sawp elemets if needed
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    //swap pivot with arr[j] to put it in the correct place
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;

}

//recursive quick sort function
void quicksort(int arr[], int low, int high){
    if(low<high){
        int pivotindex = partition(arr, low, high); //get pivot index
        quicksort(arr, low, pivotindex-1); //sort the left half array
        quicksort(arr, pivotindex+1, high); //sort the right array
    }
}

int main(){
    int n;
    printf("Enter the size of the array: ");
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

    quicksort(arr, 0, n-1);

    printf("\nSorted array: ");
    for(int i=0;i<n; i++){
        printf(" %d ", arr[i]);
    }

    printf("\n");
    return 0;

}