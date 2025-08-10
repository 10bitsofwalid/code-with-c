#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);
    printf("1st number: %d, 2nd number: %d, 3rd number: %d\n", a, b, c);
    if(a>b && a>c){
        printf("The 1st number is the greatest");
    }
    else if(b>a && b>c){
        printf("The 2nd number is the greatest among the three");
    }
    else if(c>a && c>b){
        printf("The 3rd number is the grestest among the three");
    }
    return 0;
}