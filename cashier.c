#include <stdio.h>

int main() {
    float total_cost, amount_received, change_owed;
    int shillings, fifty_cents, twenty_cents, ten_cents, five_cents, one_cent;

    // Step 1: Get total cost from user
    printf("Enter total cost in shillings: ");
    scanf("%f", &total_cost);

    // Step 2: Get amount received from user
    printf("Enter amount received in shillings: ");
    scanf("%f", &amount_received);

    // Step 3: Calculate change owed
    change_owed = amount_received - total_cost;

    // Step 4: Check if amount received is enough
    if (change_owed < 0) {
        printf("Error: amount received is not enough.\n");
        return 1;
    }

    // Step 5: Display change owed
    printf("Change owed: %.2f shillings\n", change_owed);

    // Step 6: Break down change into denominations
    shillings = change_owed;
    change_owed -= shillings;
    fifty_cents = change_owed / 0.50;
    change_owed -= fifty_cents * 0.50;
    twenty_cents = change_owed / 0.20;
    change_owed -= twenty_cents * 0.20;
    ten_cents = change_owed / 0.10;
    change_owed -= ten_cents * 0.10;
    five_cents = change_owed / 0.05;
    change_owed -= five_cents * 0.05;
    one_cent = change_owed / 0.01;

    // Step 7: Print out denominations
    printf("Shillings: %d\n", shillings);
    printf("50 cents: %d\n", fifty_cents);
    printf("20 cents: %d\n", twenty_cents);
    printf("10 cents: %d\n", ten_cents);
    printf("5 cents: %d\n", five_cents);
    printf("1 cent: %d\n", one_cent);

    return 0;
}
