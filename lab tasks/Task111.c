#include <stdio.h>
void swap(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("After swaping x & y: %d & %d", x, y);
}
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("Before swaping x & y: %d & %d\n", x, y);
    swap(x,y);
}