#include <stdio.h>
int main(){
    int n, value, index, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    scanf("%d", &arr[i]);

    printf("Enter the value to insert: ");
    scanf("%d", &value);
    printf("Enter the index to insert the element: ");
    scanf("%d", &index);

    for(i=n-1; i>=index; i--)
    arr[i+1]=arr[i];
    arr[index]=value;

    printf("Updated array: ");
    for(i=0; i<n; i++)
    printf("%d", arr[i]);

}