#include <stdio.h>
int main(){
    int day;
    printf("Enter a number(1to7): ");
    scanf("%d", &day);
    switch(day){
        case 1:
        printf("Monday(1): Start the week with some exercise!\n");
        return 0;
        case 2: 
        printf("Tuesday(2): Read a new book.\n");
        return 0;
        case 3:
        printf("Wednesday(3): Mid-week movie night!\n");
        return 0;
        case 4:
        printf("Thrusday(4): Try to cook a new recipe.\n");
        return 0;
        case 5:
        printf("Friday(5): Hang out with friends.\n");
        return 0;
        case 6:
        printf("Saturday(6): Go for a hike or outdoor activity.\n");
        return 0;
        case 7:
        printf("Sunday(7): Relax and prepare for the week ahead.\n");
        return 0;
        default:
        printf("No days\n");
    }
}