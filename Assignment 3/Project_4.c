// Task 3.4 WAP in C to find the factorial  of a given number 

#include<stdio.h>

int main(){
    int num, i;
    long long factorial = 1;  // use long long, factorials grow fast

    printf("Enter the Number to find Factorial : ");
    scanf("%d", &num);

    if(num == 0 || num == 1){
        printf("The Factorial of the number is 1");
    }
    else if(num < 0){
        printf("Factorial is not defined for negative numbers");
    }
    else{
        for(i = 2; i <= num; i++){
            factorial = factorial * i;
        }
        printf("The Factorial of %d is %lld", num, factorial);
    }

    return 0;
}
