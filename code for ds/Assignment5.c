<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){
    int size=5;
    char arr[size];
    int top=-1;

    //enter three characters
    if(top<size-1) arr[++top]='o';
    if(top<size-1) arr[++top]='g';
    if(top<size-1) arr[++top]='n';

    //delete 1 character
    if(top>=0) top--;

    //insert 2 characters
    if(top<size-1) arr[++top]='n';
    if(top<size-1) arr[++top]='m';

    //delete 1 character
    if(top>=0) top--;

    //insert 2 characters
    if(top<size-1) arr[++top]='a';
    if(top<size-1) arr[++top]='n';

    //delete 1 character
    if(top>=0) top--;

    //insert 1 character
    if(top<size-1) arr[++top]='m';

    //priint the character in reverse order
    printf("Array in reverse order: ");
    for(int i=top; i>=0; i--){
        printf("%c", arr[i]);
    }

    printf("\n");

    //try to insert other charcater
    if (top < size - 1) {
        arr[++top] = 'x';
        if (top >= size - 1) {
            printf("Don't do overflow!\n");
        }
    } else {
        printf("Don't do overflow!\n");
    }

    return 0;

=======
#include <stdio.h>
#include <string.h>

int main(){
    int size=5;
    char arr[size];
    int top=-1;

    //enter three characters
    if(top<size-1) arr[++top]='o';
    if(top<size-1) arr[++top]='g';
    if(top<size-1) arr[++top]='n';

    //delete 1 character
    if(top>=0) top--;

    //insert 2 characters
    if(top<size-1) arr[++top]='n';
    if(top<size-1) arr[++top]='m';

    //delete 1 character
    if(top>=0) top--;

    //insert 2 characters
    if(top<size-1) arr[++top]='a';
    if(top<size-1) arr[++top]='n';

    //delete 1 character
    if(top>=0) top--;

    //insert 1 character
    if(top<size-1) arr[++top]='m';

    //priint the character in reverse order
    printf("Array in reverse order: ");
    for(int i=top; i>=0; i--){
        printf("%c", arr[i]);
    }

    printf("\n");

    //try to insert other charcater
    if (top < size - 1) {
        arr[++top] = 'x';
        if (top >= size - 1) {
            printf("Don't do overflow!\n");
        }
    } else {
        printf("Don't do overflow!\n");
    }

    return 0;

>>>>>>> 87d33e437f049844b6e8cb278ca3f80645c6c8f7
}