// Task 5.3 WAP in C to find reverse of a given number by using function.

#include <stdio.h>

// Function to reverse a number
int reverse(int n) {
    int rev = 0;
    while (n != 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    return rev;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Reverse of %d = %d\n", num, reverse(num));
    
    return 0;
}
