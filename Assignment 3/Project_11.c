// Task 3.11 WAP in C to display pattern
//*
//* *
//* * *
//* * * *
//* * * * *

#include<stdio.h>
void main() {
    int num, i, j;
    printf("Enter the Number : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        for (j = 1; j <= i; j++) {
            printf("1 ");
        }
        printf("\n");
    }
}
