#include <stdio.h>
int main() {
    int x[], n, cnt=0;
    printf("Input the elements to be stored in the array: ");
    scanf("%d", n);
    printf("Input %d elements in the arry: ", n);
    for(int i=0; i<n; i++ {
        printf("Element- %d : ", i);
        scanf("%d", x[i]);
    }
    printf("Total number of duplicate elements found in the array is: ");
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(x[i]==x[j]){
                cnt++;
                break;
            }
        }
    }
}