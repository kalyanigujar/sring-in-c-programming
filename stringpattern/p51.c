// read a String and check whether it is palindrome or not  
// reverse of a String is equal to a same string  

//  Develop a program which will read a string and returns number of words in it 

// Eg Axiom TechGuru Pvt Ltd 4 words.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, length, flag = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    // Create reverse of the string
    for (i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }
    rev[length] = '\0';  // End reverse string properly

    // Compare original and reversed
    if (strcmp(str, rev) == 0)
        printf("The string is a palindrome.\n");  
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

