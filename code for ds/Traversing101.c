#include <stdio.h>
int main(){
    int arr[10], n;
    printf("Enter a number less then 11: ");
    scanf("%d", &n);
    if(n>10){
        return 0;
    }
    
    printf("Enter %d elements for the array: ", n);
    for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }

    printf("The array: \n");
    for(int i=0; i<n; i++){
        printf("Element: %d\n", arr[i]);
    }
}