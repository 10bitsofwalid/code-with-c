#include <stdio.h>
int main() {
    int a;
    float b;
    double c;
    char d;
    int a_size=sizeof(a);
    int b_size=sizeof(b);
    int c_size=sizeof(c);
    int d_size=sizeof(d);
    scanf("%d", &a);
    scanf("%f", &b);
    scanf("%lf", &c);
    scanf(" %c", &d);
    printf("Integer: %d\n", a);
    printf("Float: %.2f\n", b);
    printf("Double: %.10lf\n", c);
    printf("Character: %c\n", d);
    printf("Int size: %d\n", a_size);
    printf("Float size: %d\n", b_size);
    printf("Double size: %d\n", c_size);
    printf("Character size: %d\n", d_size);
}
