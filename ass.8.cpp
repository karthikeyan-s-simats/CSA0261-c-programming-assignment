#include <stdio.h>

int main() {
    int num, sum = 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // loop through each digit of the number
    for (int i = num; i > 0; i /= 10) {
        rem = i % 10;
        sum += rem;
    }

    printf("Sum of digits: %d", sum);
    return 0;
}
