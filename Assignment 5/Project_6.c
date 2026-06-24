// Task 5.6 WAP in c to change upper case characters of a string to lower case by using function.

#include <stdio.h>
#include <string.h>

// Function to convert uppercase string to lowercase
void toLowerCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
        i++;
    }
}

void main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline character left by fgets
    str[strcspn(str, "\n")] = '\0';

    toLowerCase(str);

    printf("Lowercase string: %s\n", str);
}
