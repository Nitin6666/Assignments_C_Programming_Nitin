// Task 3.6 WAP in C to check Armstrong Number or not

#include <stdio.h>

int main(void) {
    int num, total_digits = 0, original, rem, sum = 0, power, temp, i;

    printf("Enter the Number : ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Armstrong check is not valid for negative numbers\n");
        return 0;
    }

    original = num;
    temp = num;

    // Step 1: count total digits
    if (temp == 0) {
        total_digits = 1; // 0 itself has 1 digit
    } else {
        while (temp != 0) {
            temp /= 10;
            total_digits++;
        }
    }

    // Step 2: sum of (each digit ^ total_digits)
    temp = num;
    while (temp != 0) {
        rem = temp % 10;
        power = 1;
        for (i; i < total_digits; i++) {
            power *= rem;
        }
        sum += power;
        temp /= 10;
    }

    // Special case: 0 is trivially Armstrong
    if (original == 0) {
        sum = 0;
    }

    if (sum == original) {
        printf("The Number is Armstrong\n");
    } else {
        printf("The Number is NOT Armstrong\n");
    }
    
    return 0;
}
