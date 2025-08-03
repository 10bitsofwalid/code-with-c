#include <stdio.h>
int sum(int x, int y){
    return x+y;
}
int main(){
    int x, y, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    result=sum(x,y);
    printf("The sum of the two numbers: %d", result);
}