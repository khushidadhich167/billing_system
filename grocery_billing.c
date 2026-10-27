#include <stdio.h>

int main(void) {
    int choice, i;
    float quantity, subtotal = 0.0f, discount, finalBill;
    float qty[6] = {0};

    const char *items[6] = {
        "Rice", "Wheat Flour", "Sugar",
        "Milk", "Cooking Oil", "Potato"
    };

    const char *units[6] = {
        "kg", "kg", "kg", "litre", "litre", "kg"
    };

    float prices[6] = {60, 40, 45, 30, 150, 25};

    printf("====================================\\n");
    printf("       GROCERY STORE BILLING        \\n");
    printf("====================================\\n");

    do {
        printf("\\n-------- GROCERY MENU --------\\n");
        printf("1. Rice          - Rs. 60/kg\\n");
        printf("2. Wheat Flour   - Rs. 40/kg\\n");
        printf("3. Sugar         - Rs. 45/kg\\n");
        printf("4. Milk          - Rs. 30/litre\\n");
        printf("5. Cooking Oil   - Rs. 150/litre\\n");
        printf("6. Potato        - Rs. 25/kg\\n");
        printf("0. Generate Bill\\n");
        printf("\\nEnter item number: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\\n");
            return 1;
        }

        if (choice >= 1 && choice <= 6) {
            printf("Enter quantity (%s): ", units[choice - 1]);

            if (scanf("%f", &quantity) != 1 || quantity <= 0) {
                printf("Invalid quantity. Please run the program again.\\n");
                return 1;
            }

            qty[choice - 1] += quantity;
            printf("%s added to cart!\\n", items[choice - 1]);
        } else if (choice != 0) {
            printf("Invalid item number! Try again.\\n");
        }

    } while (choice != 0);

    printf("\\n");
    printf("===========================================================\\n");
    printf("                    GROCERY BILL                           \\n");
    printf("===========================================================\\n");
    printf("%-16s %10s %10s %12s\\n", "Item", "Quantity", "Price", "Amount");
    printf("-----------------------------------------------------------\\n");

    for (i = 0; i < 6; i++) {
        if (qty[i] > 0) {
            float amount = qty[i] * prices[i];
            printf("%-16s %7.2f %-2s %10.2f %12.2f\\n",
                   items[i], qty[i], units[i], prices[i], amount);
            subtotal += amount;
        }
    }

    discount = (subtotal >= 1000.0f) ? subtotal * 0.05f : 0.0f;
    finalBill = subtotal - discount;

    printf("-----------------------------------------------------------\\n");
    printf("Subtotal:                                  Rs. %10.2f\\n", subtotal);
    printf("Discount:                                  Rs. %10.2f\\n", discount);
    printf("Final Amount:                              Rs. %10.2f\\n", finalBill);
    printf("===========================================================\\n");
    printf("              Thank you! Visit Again.                      \\n");
    printf("===========================================================\\n");

    return 0;
}
