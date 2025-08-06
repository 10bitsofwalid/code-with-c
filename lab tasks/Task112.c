#include <stdio.h>
double sqrt(double a){
    return a*a;
}
int main() {
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    sqrt(a);
    printf("The expected output is: %.2lf", sqrt(a));    
}