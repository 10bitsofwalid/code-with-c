#include<stdio.h>
#include<string.h>
struct Person{
    char name[50];
    int age;
    float salary;
};
int main() {
    struct Person person[4];
    //input from user
    for(int i=0; i<4; i++) {
        printf("Enter information for person %d: \n", i+1); //person 1 show krbe
        printf("Enter name: ");
        gets(person[i].name);
        printf("Enter age: ");
        scanf("%d", &person[i].age);
        printf("Enter salary: ");
        scanf("%f", &person[i].salary);
    }
    //printing output
    for(int i=0; i<4; i++) {
        printf("\nInformation for person %d: \n", i+1); //person 1 show krbe
        printf("Name: %s\n", person[i].name);
        printf("Age: %d\n", person[i].age);
        printf("Salary: %.2f\n", person[i].salary);
    }
    return 0;
}