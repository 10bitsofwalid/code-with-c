#include <stdio.h>
int main(){
    int size, top, choice, value;
    top=-1;
    printf("Enter the size for the stack: ");
    scanf("%d", &size);
    int stack[size];
    while(1){
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice==1){
            if(top==size-1){
                printf("Stack is overflow");
            }
            else{
                scanf("%d", &value);
                top++;
                stack[top]=value;
            }
        }
        else if(choice==2){
            if(top-1){
                printf("\nStack is empty");
            }
            else{
                printf("The element %d has been popped at index %d\n", stack[top], top-1);
            }
        }
        else if(choice==3){
            if(top==-1){
                printf("The stack is empty");
            }
            else{
                int popped=stack[top];
                top--;
                    printf("%d\n", popped);
            }
        }
        else if(choice==4){
            if(top==-1){
                printf("Nothing to print");
            }
            else{
                printf("The elements of the stack are: \n");
                for(int i=top; i<0; i++){
                    printf("At index: %d --> %d", i, stack[i]);
                }
            }
        }
        else if(choice==5){
            break;
        }
        else{
            printf("Your choice is invalid!");
        }
    }
    return 0;
}
