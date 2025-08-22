#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Structure to hold account details
struct Account
{
    int acc_no;
    char name[60];
    int age;
    char address[60];
    char acc_type[10];
    float balance;
};

// Node structure for linked list
struct Node
{
    struct Account account;
    struct Node *next;
};

// Function prototypes
void menu();
void createAccount();
void viewAccounts();
void depositMoney();
void withdrawMoney();
void exitProgram();

// Global variable for the head of the linked list
struct Node *head = NULL;

int main()
{
    printf("Welcome to the Simple Banking System!\n");
    menu();
    return 0;
}

// Main menu function
void menu()
{
    int choice;

    while (true)
    {
        printf("\n--- Main Menu ---\n");
        printf("1. Create a new account\n");
        printf("2. View all accounts\n");
        printf("3. Deposit money\n");
        printf("4. Withdraw money\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            createAccount();
            break;
        case 2:
            viewAccounts();
            break;
        case 3:
            depositMoney();
            break;
        case 4:
            withdrawMoney();
            break;
        case 5:
            exitProgram();
            return;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
}

// Function to create a new account
void createAccount()
{
    struct Account newAccount;
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("\n--- Create New Account ---\n");
    printf("Enter account number: ");
    scanf("%d", &newAccount.acc_no);
    printf("Enter name: ");
    scanf("%s", newAccount.name);
    printf("Enter age: ");
    scanf("%d", &newAccount.age);
    printf("Enter address: ");
    scanf("%s", newAccount.address);
    printf("Enter account type (Saving/Current): ");
    scanf("%s", newAccount.acc_type);
    printf("Enter initial deposit amount: ");
    scanf("%f", &newAccount.balance);

    newNode->account = newAccount;
    newNode->next = head;
    head = newNode;

    printf("Account created successfully!\n");
}

// Function to view all accounts
void viewAccounts()
{
    struct Node *current = head;

    printf("\n--- Account List ---\n");
    if (current == NULL)
    {
        printf("No accounts found.\n");
        return;
    }

    while (current != NULL)
    {
        printf("Account No: %d, Name: %s, Balance: $%.2f\n",
               current->account.acc_no, current->account.name, current->account.balance);
        current = current->next;
    }
}

// Function to deposit money
void depositMoney()
{
    int acc_no;
    float amount;
    bool found = false;
    struct Node *current = head;

    printf("\n--- Deposit Money ---\n");
    printf("Enter account number: ");
    scanf("%d", &acc_no);

    while (current != NULL)
    {
        if (current->account.acc_no == acc_no)
        {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            current->account.balance += amount;
            printf("Deposit successful! New balance: $%.2f\n", current->account.balance);
            found = true;
            break;
        }
        current = current->next;
    }

    if (!found)
    {
        printf("Account not found!\n");
    }
}

// Function to withdraw money
void withdrawMoney()
{
    int acc_no;
    float amount;
    bool found = false;
    struct Node *current = head;

    printf("\n--- Withdraw Money ---\n");
    printf("Enter account number: ");
    scanf("%d", &acc_no);

    while (current != NULL)
    {
        if (current->account.acc_no == acc_no)
        {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount > current->account.balance)
            {
                printf("Insufficient balance!\n");
            }
            else
            {
                current->account.balance -= amount;
                printf("Withdrawal successful! New balance: $%.2f\n", current->account.balance);
            }
            found = true;
            break;
        }
        current = current->next;
    }

    if (!found)
    {
        printf("Account not found!\n");
    }
}

// Function to exit the program
void exitProgram()
{
    struct Node *current = head;
    struct Node *temp;

    printf("Thank you for using the Simple Banking System. Goodbye!\n");

    // Free the linked list memory
    while (current != NULL)
    {
        temp = current;
        current = current->next;
        free(temp);
    }
}
