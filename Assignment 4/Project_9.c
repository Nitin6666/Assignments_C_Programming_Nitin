// Task 4.9 WAP in C to illustrate the use of strcmp() function.

#include<stdio.h>
#include<string.h>

void main(){
    char str1[50], str2[50];
    int result;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    result = strcmp(str1, str2);

    if(result == 0){
        printf("Both strings are equal.\n");
    }
    else if(result < 0){
        printf("String 1 is less than String 2.\n");
    }
    else{
        printf("String 1 is greater than String 2.\n");
    }

    printf("strcmp() returned: %d\n", result);
}
