// Program which will returns number of occurrences of a character in a string .
#include <stdio.h>

int main() {
    char str[100], ch;  
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string with spaces

    printf("Enter a character to count: ");
    scanf("%c", &ch);   // Reads the character to search in the string.

    // Loop through the string
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;  // Increment count if character matches
        }
    }

    printf("The character '%c' occurs %d times in the string.\n", ch, count);
    return 0;
}
