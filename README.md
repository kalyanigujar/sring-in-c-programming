# 🧵 Strings in C Programming

This repository contains programs that demonstrate **string handling** in C.

## 📘 Overview
Strings in C are **arrays of characters** terminated by a null character `'\0'`.

### Example
```c
#include <stdio.h>
#include <string.h>

int main() {
    char name[20];
    printf("Enter your name: ");
    gets(name);
    printf("Hello, %s!\n", name);
    printf("Length: %d\n", strlen(name));
    return 0;
}
