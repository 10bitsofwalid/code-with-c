#include <stdio.h>
int main(){
    int n, temp;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[10];
    for(int i=0; i<105; i++){
        for(int j=1; j<n; j++){
            if(arr[j]<arr[j-1]){
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
    printf("Array: \n");
    for(int i=0; i<10; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}