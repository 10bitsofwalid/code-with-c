#include <stdio.h>
#include <string.h>

#define MAX_CALLS 100

struct Call {
    char name[50];
    char phoneNumber[15];
};

void addCall(struct Call callHistory[], int *callCount);
void viewCalls(struct Call callHistory[], int callCount);

int main() {
    struct Call callHistory[MAX_CALLS];
    int callCount = 0;
    int choice;

    while (1) {
        printf("\nPhone Call History Manager\n");~~
        printf("1. Add Call\n");
        printf("2. View Call History\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                addCall(callHistory, &callCount);
                break;
            case 2:
                viewCalls(callHistory, callCount);
                break;
            case 3:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

void addCall(struct Call callHistory[], int *callCount) {
    if (*callCount >= MAX_CALLS) {
        printf("Call history is full!\n");
        return;
    }

    printf("Enter caller name: ");
    fgets(callHistory[*callCount].name, sizeof(callHistory[*callCount].name), stdin);
    callHistory[*callCount].name[strcspn(callHistory[*callCount].name, "\n")] = 0;

    printf("Enter phone number: ");
    fgets(callHistory[*callCount].phoneNumber, sizeof(callHistory[*callCount].phoneNumber), stdin);
    callHistory[*callCount].phoneNumber[strcspn(callHistory[*callCount].phoneNumber, "\n")] = 0;

    (*callCount)++;
    printf("Call added successfully.\n");
}

void viewCalls(struct Call callHistory[], int callCount) {
    if (callCount == 0) {
        printf("No call history to display.\n");
        return;
    }

    printf("\nCall History:\n");
    for (int i = 0; i < callCount; i++) {
        printf("%d. %s - %s\n", i + 1, callHistory[i].name, callHistory[i].phoneNumber);
    }
}
