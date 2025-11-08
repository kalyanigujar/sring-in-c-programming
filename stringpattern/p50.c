// i/p AxiomTechGuru 

// o.p  

// A 

// Ax 

// Axi 

// Axio 

// Axiom 
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    // Print pattern
    for (i = 0; i < length; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}
