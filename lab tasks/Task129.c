#include <stdio.h>
int main(){
    int score;
    printf("Enter the score of the student: ");
    scanf("%d", &score);
    if(score>=90 && score<=100){
        printf("Grade A");
    }
    else if(score>=80 && score<90){
        printf("Grade B");
    }
    else if(score>=70 && score<80){
        printf("Grade C");
    }
    else if(score>=60 && score<70){
        printf("Grade D");
    }
    else if(score<60){
        printf("Grade F");
    }
    else{
        printf("Invalid score number");
    }
    return 0;
}