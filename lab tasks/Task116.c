#include <stdio.h>

int Sumofarray(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    printf("The sum of the array: %d\n", sum);
    return sum;
}

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    Sumofarray(arr, n);
    return 0;
}