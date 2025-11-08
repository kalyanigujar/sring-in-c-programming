//  A program to read a string and print its reverse. 

// Read a String and check no of vowels and consonants in it  

// a,e,i,o,u ---vowels , consonants.  basic 
#include <stdio.h>
#include <string.h>  

int main() {
    char str[100];
    int i, length;  

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    // Remove newline character from fgets
    length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    printf("Reverse of the string: ");
    for (i = length - 1; i >= 0; i--) {  
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
