// Task 5.5 WAPin c to change lower case characters of a string to upper case by using function.

#include <stdio.h>

// Function to convert lowercase string to uppercase
void toUpperCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
        i++;
    }
}

void main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);   // or use fgets(str, sizeof(str), stdin) for safety

    toUpperCase(str);

    printf("Uppercase string: %s\n", str);
}
