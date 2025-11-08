// Program to convert case of a given string.
#include <stdio.h>

int main() {  
    char str[100];
    int i = 0;   // counter to loop through each character of the string.

    printf("Enter a string: ");  
    fgets(str, sizeof(str), stdin);  // Read string with spaces. reads a line of text including spaces.
                              // is the standard input (keyboard). - stdin
    // Convert case
    while (str[i] != '\0') {   // an array of characters to store the string.
        if (str[i] >= 'a' && str[i] <= 'z') {       
            str[i] = str[i] - 32;  // Convert lowercase to uppercase
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {   
            str[i] = str[i] + 32;  // Convert uppercase to lowercase
        }
        i++;  
    }

    printf("String after case conversion: %s\n", str);
    return 0;
}
