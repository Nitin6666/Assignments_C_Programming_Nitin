// Task 3.1 WAP in C to generate Fibonacci series up to given number 

#include <stdio.h>

void main() {
    int n, a = 0, b = 1, c;

    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    if (n >= 0)
        printf("%d ", a);

    if (n >= 1)
        printf("%d ", b);

    c = a + b;

    while (c <= n) {
        printf("%d ", c);

        a = b;
        b = c;
        c = a + b;
    }
}
