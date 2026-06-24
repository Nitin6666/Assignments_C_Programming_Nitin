// Task 3.5 WAP in C to find sum of the digit of the given number

#include<stdio.h>

void main(){
    int num, sum = 0, remainder;

    printf("Enter the Number : ");
    scanf("%d", &num);

    while(num > 0){
        remainder = num % 10;
        sum += remainder;
        num = num / 10;
    }

    printf("The Sum of the digits is : %d", sum);
}
