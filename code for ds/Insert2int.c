#include <stdio.h>
int main(){
    int size, n, num1, num2;

    //array size input
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    //declare array with extra space
    int arr[size+2];
    n=size;

    //input of elements
    printf("Enter the elements of the array: ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    //get two numbers for insertation
    printf("Enter the two integer numbers: ");
    scanf("%d %d", &num1, &num2);

    //checking for left over space
    if(n+2>size+2){
        printf("Array is full");
        return 1;
    }

    //add numbers to the end
    arr[n]=num1;
    arr[n+1]=num2;
    n=n+2;

    //print the updated array
    printf("Updated array: ");
    for(int i=0; i<n; i++){
        printf(" %d ", arr[i]);
    }

    printf("\n");
    return 0;

}