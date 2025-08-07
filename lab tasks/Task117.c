#include <stdio.h>

void checkVowel(char x){
    if(x=='A'|| x=='E' || x=='I' || x=='O' || x=='U' || x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
        printf("%c is vowel", x);
    }
    else if((x>='A' && x<='Z') || (x>='a' && x<='z')){
        printf("%c is consonet", x);
    }
    else{
        printf("The character %c is invalid", x);
    }
}

int main(){
    char x;
    printf("Enter the character: ");
    scanf("%c", &x);

    checkVowel(x);

    return 0;
}