//Task 3.12 WAP in C to display pattern
//* * * * *
//* * * *
//* * *
//* *
//*

#include<stdio.h>
void main(){
    int num, i, j;
    
    printf("Enter the Number : ");
    scanf("%d", &num);
    
    for (i = num; i >= 1; i--) {   // start from num, decrease to 1
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
