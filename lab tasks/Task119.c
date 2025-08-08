#include <stdio.h>

float areaofCircle(float r){
    float area= 3.1416*r*r;
    printf("Area: %.2f", area);
    return area;
}

int main(){
    float r;
    printf("Enter the radius: ");
    scanf("%f", &r);

    areaofCircle(r);
}