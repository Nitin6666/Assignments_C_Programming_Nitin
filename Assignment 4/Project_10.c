// Task 4.10 WAP in c to illustrate the use of strrev() function.

#include<stdio.h>
#include<string.h>

void main(){
    char str[50];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Original string : %s\n", str);

    strrev(str);

    printf("Reversed string : %s\n", str);
}
