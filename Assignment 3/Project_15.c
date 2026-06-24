//Task 3.15 WAP in C to display following pattern
//*
//* * *
//* * * * *
//* * * * * * *
//* * * * * * * * *

#include<stdio.h>
void main(){
    int num, i, j, k, rows, maxStars;
    
    printf("Enter the Number : ");
    scanf("%d", &num);
    
    rows = (num + 1) / 2;          // number of rows
    maxStars = 2 * rows - 1;        // stars in the last (widest) row
    
    for(i = 1; i <= num; i += 2){
        // print leading spaces for centering
        for(k = 1; k <= (maxStars - i) / 2; k++){
            printf("  ");          // 2 spaces to match "* " width
        }
        // print stars
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
}
