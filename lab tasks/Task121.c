#include <stdio.h>

int revnum(int n){
    int rev=0, rem;

    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("reversed number: %d", rev);

    return rev;
}

int main(){
    int n, rev;
    printf("Enter the number: ");
    scanf("%d", &n);

    revnum(n);

    return 0;
}