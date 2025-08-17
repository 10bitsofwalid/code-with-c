#include <stdio.h> 
void bubblesort(char arr[], int size){

    char a;
    for(int i=0; i<size; i++){
        for(int j=0; j<size-1-i; j++){
            if(arr[j]>arr[j+1]){
                a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
            }
        }
    }
}

int binarysearch(char arr[], int size, char key){
    int left=0, right=size-1, mid;

    while (left<=right){
        mid=left+(right-left)/2;
        
        if(arr[mid]==key){
            return mid;
        }
        
        if(arr[mid]<key){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}

int main(){
    int size, i;
    char key;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    char arr[size];

    printf("Enter the characters for the array: ");
    for(i=0; i<size; i++){
        scanf(" %c", &arr[i]);
    }

    bubblesort(arr, size);

    printf("The sorrted array: ");
    for(i=0; i<size; i++){
        printf("%c ", arr[i]);
    }
    printf("\n");

    printf("Enter the character for search: ");
    scanf(" %c", &key);

    int get=binarysearch(arr, size, key);

    if(get!=-1){
        printf("%c found at index: %d", key, get);
    }
    else{
        printf("Character not found");
    }

    return 0;

}