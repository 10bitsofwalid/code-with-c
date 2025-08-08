#include <stdio.h>

int gcd(int n1, int n2){
    int gcd=1;
    int min;

    if(n1<n2){
        min=n1;
    }
    else{
        min=n2;
    }

    for(int i=1; i<=min; i++){
        if(n1%1==0 && n2%i==0){
            gcd=i;
        }
    }

    printf("GCD of the numbers is: %d", gcd);
    return gcd;
}

int main(){
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    gcd(n1, n2);
}