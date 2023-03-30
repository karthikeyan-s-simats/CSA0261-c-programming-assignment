#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int vowels = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // using fgets() to read input

    for (int i = 0; i < strlen(str); i++) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowels++;
        }
    }

    printf("The number of vowels in the string is: %d\n", vowels);

    return 0;
}
