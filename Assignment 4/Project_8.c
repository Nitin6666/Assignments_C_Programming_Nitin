// Task 4.8 WAP in c to illustrate the use of strcpy() function.

#include<stdio.h>
#include<string.h>

void main(){
    char source[50], destination[50];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = '\0';  // remove trailing newline

    strcpy(destination, source);

    printf("Source string      : %s\n", source);
    printf("Copied (destination): %s\n", destination);
}
