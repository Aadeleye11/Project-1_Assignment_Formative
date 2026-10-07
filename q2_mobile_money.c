#include <stdio.h>

// Question 2: Transaction Processing and Control Flow
int main() {
    int choice;
    float balance = 0.0;
    float amount;
    int depositCount = 0;
    int withdrawCount = 0;

    while (1) {
        printf("\n===== MOBILE MONEY TRANSACTION SYSTEM =====\n");
        printf("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Transaction Summary\n5. Exit\n");
        printf("Enter choice: ");
        
        // Handle non-integer input
        if (scanf("%d", &choice) != 1) {
            while(getchar() != '\n');
            printf("Invalid input. Please enter a number.\n");
            continue;
        }

        if (choice == 5) {
            printf("System terminated.\n");
            break; // Exits the while loop entirely
        }

        switch (choice) {
            case 1:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Transaction rejected: Amount must be positive.\n");
                    continue; // Skips the rest of the loop and returns to menu
                }
                balance += amount;
                depositCount++;
                printf("Deposit successful.\nCurrent balance: %.2f RWF\n", balance);
                break; // Exits the switch statement

            case 2:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Transaction rejected: Amount must be positive.\n");
                    continue; // Skips to menu
                }
                if (amount > balance) {
                    printf("Transaction rejected: Insufficient balance.\n");
                    continue; // Skips to menu
                }
                balance -= amount;
                withdrawCount++;
                printf("Withdrawal successful.\nCurrent balance: %.2f RWF\n", balance);
                break;

            case 3:
                printf("Current balance: %.2f RWF\n", balance);
                break;

            case 4:
                printf("--- Transaction Summary ---\n");
                printf("Successful Deposits: %d\n", depositCount);
                printf("Successful Withdrawals: %d\n", withdrawCount);
                break;

            default:
                printf("Invalid choice. Please select an option from 1 to 5.\n");
        }
    }
    return 0;
}