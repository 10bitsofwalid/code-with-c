#include <stdio.h>

int swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int n, min;

    printf("enter the size for the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter the elements for the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n-1; i++){
        min=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }

        if(min!=i){
            swap(&arr[i], &arr[min]);
        }
    }

    printf("sorted array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

}