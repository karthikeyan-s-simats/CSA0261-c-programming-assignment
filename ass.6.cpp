#include <stdio.h>

int main() {
    int amount, notes;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    printf("Minimum number of notes required for %d:\n", amount);
    notes = amount / 500;
    printf("Rs. 500: %d\n", notes);
    amount = amount % 500;
    notes = amount / 100;
    printf("Rs. 100: %d\n", notes);
    amount = amount % 100;
    notes = amount / 50;
    printf("Rs. 50: %d\n", notes);
    amount = amount % 50;
    notes = amount / 20;
    printf("Rs. 20: %d\n", notes);
    amount = amount % 20;
    notes = amount / 10;
    printf("Rs. 10: %d\n", notes);
    amount = amount % 10;
    notes = amount / 5;
    printf("Rs. 5: %d\n", notes);
    amount = amount % 5;
    notes = amount / 2;
    printf("Rs. 2: %d\n", notes);
    amount = amount % 2;
    notes = amount / 1;
    printf("Rs. 1: %d\n", notes);
    return 0;
}
