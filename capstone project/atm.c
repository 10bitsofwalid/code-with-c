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
void saveAccountsToFile();
void loadAccountsFromFile();
bool login();

// Global variable for the head of the linked list
struct Node *head = NULL;

int main()
{
    if (!login())
    {
        printf("\nIncorrect password. Exiting...\n");
        return 0;
    }

    printf("   Welcome to the Nigga Banking System!  \n");
    printf("=========================================\n");

    loadAccountsFromFile();
    menu();
    return 0;
}

// Function to check login password
bool login()
{
    char password[10], ch;
    int i = 0;

    printf("\n=========================================\n");
    printf("              Login System               \n");
    printf("=========================================\n");
    printf("      Enter system password: ");

    while (true)
    {
        ch = getchar();
        if (ch == '\n')
        {
            password[i] = '\0';
            break;
        }
        else if (ch == '\b') // Backspace key pressed
        {
            if (i > 0)
            {
                i--;
                printf("\b \b"); // Erase the last character
            }
        }
        else if (i < sizeof(password) - 1)
        {
            password[i++] = ch;
        }
    }

    return strcmp(password, "2850") == 0;
}

// Main menu function
void menu()
{
    int choice;

    while (true)
    {
        printf("\n=========================================\n");
        printf("                 Main Menu               \n");
        printf("=========================================\n");
        printf("1. Create a new account\n");
        printf("2. View all accounts\n");
        printf("3. Deposit money\n");
        printf("4. Withdraw money\n");
        printf("5. Exit\n");
        printf("=========================================\n");
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
            printf("\nInvalid choice! Please try again.\n");
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
        printf("\nMemory allocation failed!\n");
        return;
    }

    printf("\n=========================================\n");
    printf("           Create New Account            \n");
    printf("=========================================\n");
    printf("Enter account number : ");
    while (scanf("%d", &newAccount.acc_no) != 1)
    {
        printf("Invalid input. Please enter account number in integer: ");
        while (getchar() != '\n')
            ; // Clear input buffer
    }

    printf("Enter name : ");
    while (getchar() != '\n')
        ; // Clear input buffer
    fgets(newAccount.name, sizeof(newAccount.name), stdin);
    newAccount.name[strcspn(newAccount.name, "\n")] = '\0'; // Remove newline

    printf("Enter age : ");
    while (scanf("%d", &newAccount.age) != 1)
    {
        printf("Invalid input. Please enter age in integer: ");
        while (getchar() != '\n')
            ; // Clear input buffer
    }

    printf("Enter address (string): ");
    while (getchar() != '\n')
        ; // Clear input buffer
    fgets(newAccount.address, sizeof(newAccount.address), stdin);
    newAccount.address[strcspn(newAccount.address, "\n")] = '\0'; // Remove newline

    printf("Enter account type (Saving/Current): ");
    scanf("%s", newAccount.acc_type);

    printf("Enter initial deposit amount: ");
    while (scanf("%f", &newAccount.balance) != 1)
    {
        printf("Invalid input. Please enter a valid amount: ");
        while (getchar() != '\n')
            ; // Clear input buffer
    }

    newNode->account = newAccount;
    newNode->next = head;
    head = newNode;

    saveAccountsToFile();
    printf("\nAccount created successfully!\n");
}

// Function to view all accounts
void viewAccounts()
{
    struct Node *current = head;

    printf("\n=========================================\n");
    printf("               Account List              \n");
    printf("=========================================\n");

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

    printf("\n=========================================\n");
    printf("              Deposit Money              \n");
    printf("=========================================\n");
    printf("Enter account number: ");
    scanf("%d", &acc_no);

    while (current != NULL)
    {
        if (current->account.acc_no == acc_no)
        {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            current->account.balance += amount;
            saveAccountsToFile();
            printf("\nDeposit successful! New balance: $%.2f\n", current->account.balance);
            found = true;
            break;
        }
        current = current->next;
    }

    if (!found)
    {
        printf("\nAccount not found!\n");
    }
}

// Function to withdraw money
void withdrawMoney()
{
    int acc_no;
    float amount;
    bool found = false;
    struct Node *current = head;

    printf("\n=========================================\n");
    printf("             Withdraw Money              \n");
    printf("=========================================\n");
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
                printf("\nInsufficient balance!\n");
            }
            else
            {
                current->account.balance -= amount;
                saveAccountsToFile();
                printf("\nWithdrawal successful! New balance: $%.2f\n", current->account.balance);
            }
            found = true;
            break;
        }
        current = current->next;
    }

    if (!found)
    {
        printf("\nAccount not found!\n");
    }
}

// Function to save accounts to a file
void saveAccountsToFile()
{
    FILE *file = fopen("accounts.dat", "wb");
    if (file == NULL)
    {
        printf("\nError saving accounts to file.\n");
        return;
    }

    struct Node *current = head;
    while (current != NULL)
    {
        fwrite(&current->account, sizeof(struct Account), 1, file);
        current = current->next;
    }

    fclose(file);
}

// Function to load accounts from a file
void loadAccountsFromFile()
{
    FILE *file = fopen("accounts.dat", "rb");
    if (file == NULL)
    {
        return; // No file exists yet
    }

    struct Account account;
    while (fread(&account, sizeof(struct Account), 1, file))
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        if (newNode == NULL)
        {
            printf("\nMemory allocation failed!\n");
            fclose(file);
            return;
        }

        newNode->account = account;
        newNode->next = head;
        head = newNode;
    }

    fclose(file);
}

// Function to exit the program
void exitProgram()
{
    struct Node *current = head;
    struct Node *temp;

    printf("\n=========================================\n");
    printf("   Thank you for using our banking system!\n");
    printf("=========================================\n");

    // Free the linked list memory
    while (current != NULL)
    {
        temp = current;
        current = current->next;
        free(temp);
    }
}
