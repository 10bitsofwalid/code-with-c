#include <stdio.h>
struct Employee{
    int id;
    char name[50];
    float salary;
};
int main(){
    struct Employee emplys[3];
    int max=0;
    for(int i=0; i<3; i++){
        printf("Enter the details of the employee: %d\n", i+1);
        printf("Enter the ID: ");
        scanf("%d", &emplys[i].id);
        printf("Enter the name of employee: ");
        scanf("%s", &emplys[i].name);
        printf("Enter the salary of the employee: ");
        scanf("%f", &emplys[i].salary);
    }
    for(int i=1; i<3; i++){
        if(emplys[i].salary>emplys[max].salary){
            max=i;
        }
    }
    printf("\n Employee with the highest salary: \n");
    printf("ID of the employee: %d\n", emplys[max].id);
    printf("Name of the employee: %s\n", emplys[max].name);
    printf("Salary of the employee: %f\n", emplys[max].salary);
}