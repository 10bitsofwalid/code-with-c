#include <stdio.h>
int main(){

    int size, n, num1, num2, index1, index2;

    //array size input
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    //allocatting the extra size for the two integers
    int arr[size+2];
    n=size;

    //element input for the array
    printf("Enter the elements of the aray: ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    //input of 1st integer and index
    printf("Enter the first integer and the index for insertation: ");
    scanf("%d %d", &num1, &index1);

    //input of 2nd integer and index
    printf("Enter the second integer and index for insertation: ");
    scanf("%d %d", &num2, &index2);

    //check for valid index
    if(index1<0 || index1>n || index2<0 || index2>n+1 || index1==index2){
        printf("Wrong position");
    }

    //shiffting elements to insert the 1st integer
    for(int i=n; i>index1; i--){
        arr[i]=arr[i-1];
    }
    arr[index1]=num1;
    n++;

    //adjust index for 2nd integer
    if(index2>index1){
        index2++;
    }

    //shiffting elements to insert the 2nd integer
    for(int i=n; i>index2; i--){
        arr[i]=arr[i-1];
    }
    arr[index2]=num2;
    n++;

    //output of the updated array
    printf("The updated array is: ");
    for(int i=0; i<n; i++){
        printf(" %d ", arr[i]);
    }

    printf("\n");
    return 0;

}