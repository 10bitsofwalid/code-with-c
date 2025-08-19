#include <stdio.h>
int main(){

    int size, element1, element2;

    printf("Enter the size for the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    int found1=0;
    int found2=0;
    int newarr[size];
    int newsize=0;

    printf("Enter the 1st element for delation: ");
    scanf("%d", &element1);

    printf("Enter the 2nd element for delatation: ");
    scanf("%d", &element2);

    for(int i=0; i<size; i++){
        if(arr[i]==element1){
            found1=1;
        }
        else if(arr[i]==element2){
            found2=1;
        }
        else{
            newarr[newsize]=arr[i];
            newsize++;
        }
    }

    if(!found1 && !found2){
        printf("Element do not exist");
    }
    else{
        if(!found1){
            printf("%d do not exist in the array", element1);
        }
        if(!found2){
            printf("%d do not exist in the array", element2);
        }
        if(found1 || found2){
            printf("Updated array: ");
            for(int i=0; i<newsize; i++){
                printf("%d", newarr[i]);
            }
            printf("\n");
        }
    }

    return 0;

}