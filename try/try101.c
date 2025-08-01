#include <stdio.h>
int main(){

    int n, sum=0, avg, cube, mul;

    printf("Enter the range to show the natural numbers: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("\nThe natural numbers are: %d", i);
        sum=sum+i;
        avg=n/2;
    }
    
    printf("\n");
    printf("\nThe sum of the natural numbers: %d", sum);
    printf("\nThe average of the natural numbers: %d", avg);
    printf("\n");
    
    for(int i=1; i<=n; i++){
        cube=i*i*i;
        printf("\nThe cubic value of the natural numbers: %d", cube);
    }

    printf("\n");
    printf("\nEnter the number for the multiplication table: ");
    scanf("%d", &n);

    for(int i=1; i<=12; i++){
        mul=n*i;
        printf("\n%d * %d = %d ", n, i, mul);
    }

}