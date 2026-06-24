// Task 4.6 WAP in C to illustrate the use of strcat() function

#include<stdio.h>
#include<string.h>

void main(){
    char str1[50], str2[30];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    strcat(str1, str2);

    printf("After concatenation: %s\n", str1);
}
