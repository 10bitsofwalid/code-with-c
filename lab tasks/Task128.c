#include<stdio.h>
int main() {
 int day;
 printf("Enter a number(1-7): ");
 scanf("%d", &day);
 switch(day) {
case 1:
 printf("Monday: Start the week with some exercise.\n");
 break;
case 2:
 printf("Tuesday: Read a new book.\n");
 break;
case 3:
 printf("Wednesday: Mid-week movie night.\n");
 break;
case 4:
 printf("Thursday: Try cooking a new recipe.\n");
 break;
case 5:
 printf("Friday: Hang out with friends.\n");
 break;
case 6:
 printf("Saturday: Go for a hike or outdoor activities.\n");
 break;
case 7:
 printf("Sunday: Relax & prepare for the week ahead.\n");
 break;
default:
 printf("No days\n");
 }
}