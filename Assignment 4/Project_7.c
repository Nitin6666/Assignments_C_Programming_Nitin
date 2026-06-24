// Task 4.7 WAP in c to illustrate the use of strlen() function.

#include<stdio.h>
#include<string.h>

void main(){
    char str[50];
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // remove trailing newline

    length = strlen(str);

    printf("Length of the string is: %d\n", length);
}
