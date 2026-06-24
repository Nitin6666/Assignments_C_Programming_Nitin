// Task 5.1 WAP in C to find sum of digits of a number by using function

#include<stdio.h>

void sum_of_digits(int a){
    int rem, sum = 0;
    while(a > 0){
        rem = a % 10;
        sum += rem;
        a /= 10;
    }
    printf("The Sum of the Digits is %d", sum);
}

void main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d", &a);
    sum_of_digits(a);
}
