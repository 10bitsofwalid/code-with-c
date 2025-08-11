#include <stdio.h>
int main(){
    int n, sum=0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i=i+2){
        sum+=i;
        printf("The sum of the odd numbers are: %d", sum);
    }
}