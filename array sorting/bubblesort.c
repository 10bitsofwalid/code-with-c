#include <stdio.h>
int main(){
    int n, temp;

    printf("enter the size for the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter the elements for the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("sorted array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

}