// Task 3.2 WAP in C to reverse the digit of a given number.

#include<stdio.h>
void main(){
    int num, reverse = 0, digit;
    
    printf("Enter the Number : ");
    scanf("%d", &num);
    
    while(num != 0){
        digit = num % 10;       // extract last digit
        reverse = reverse * 10 + digit;  // build reversed number
        num /= 10;               // remove last digit
    }
    
    printf("The Reverse of the Number is %d", reverse);
}
