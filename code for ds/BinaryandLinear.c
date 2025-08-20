#include <stdio.h>

//binary search function
int binarysearch(int arr[], int key, int low, int high){
    while (low<=high){
        int mid=low+(high-low)/2; //calc mid value

        if(arr[mid]==key){
            return mid; //key found at mid index
        }
        else if(arr[mid]<key){
            low=mid+1; //key present at right half of the array
        }
        else{
            high=mid-1; // key present at left half of the array
        }
    }
    return -1; //key not found
}

//linear search function
int linearsearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return i; //key found at index i
        }
    }
    return -1; //key not found
}

int main(){

    int size=10, key, linearvalue, binaryvalue;
    int arr[size];

    //input of array elements
    printf("Enter the elements of the array: ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    //input of key value
    printf("Enter the element for search: ");
    scanf("%d", &key);

    //call binary function
    binaryvalue=binarysearch(arr, 0, 9, key);

    //call linear function
    linearvalue=linearsearch(arr, 10, key);

    //output
    if(binaryvalue!=-1){
        printf("\nBinary Search \nElement found at index: %d", binaryvalue);
    }
    else{
        printf("\nBinary Search \nElement not found!");
    }

    if(linearvalue!=-1){
        printf("\nLinear Search \nElement found at index: %d", linearvalue);
    }
    else{
        printf("\nLinear Search \nElement not found!");
    }

    //comparison between the searches
    if(linearvalue!=-1 && binaryvalue!=-1){
        printf("\nBoth searches executed");
    }
    else if(binaryvalue!=-1){
        printf("\nBinary Search executed, Linear Search not executed");
    }
    else if(linearvalue!=-1){
        printf("\nLinear Search executed, Binary Search not executed");
    }
    else{
        printf("\nNone Executed");
    }

    return 0;

}
