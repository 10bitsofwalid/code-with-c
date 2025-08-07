#include <stdio.h>

void oddneven(int n){
    if(n%2==0){
        printf("Number is even");
    }
    else{
        printf("Number is odd");
    }
}

int main(){
    int n;
    printf("Enter an integer number: ");
    scanf("%d", &n);
    oddneven(n);
    return 0;
}