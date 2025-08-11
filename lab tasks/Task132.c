#include <stdio.h>
int main(){
    int temp;
    printf("Enter the temprature: ");
    scanf("%d", &temp);
    if(temp<0){
        printf("Freezing Weather");
    }
    else if(temp>=0 && temp<10){
        printf("Very cold weather");
    }
    else if(temp>=10 && temp<20){
        printf("Cold weather");
    }
    else if(temp>=20 && temp<30){
        printf("Normal in Temprature");
    }
    else if(temp>=30 && temp<40){
        printf("It's hot");
    }
    else if(temp>=40){
        printf("It's very hot");
        return 0;
    }
    else{
        printf("It's very hot");
    }
}