#include <stdio.h>
int main(){

    int size, minimum, maximum, middle, search;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements: ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to find: ");
    scanf("%d", &search);

    minimum=0;
    maximum=size-1;
    middle=(maximum+minimum)/2;

    while(minimum<=maximum){
        if(arr[middle]<search){
            minimum=middle+1;
        }
        else if(arr[middle]==search){
            printf("%d found at index: %d", search, middle);
            return 0;
        }
        else{
            maximum=middle-1;
        }
        middle=(minimum+maximum)/2;
    }

    printf("%d do not exist in the array", search);

    return 0;

}