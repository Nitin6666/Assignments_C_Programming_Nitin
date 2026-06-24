// Task 3.8 WAP in to check given number is prime or not

#include<stdio.h>

void main()
{
    int num, i, flag = 0;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if(num <= 1)
    {
        printf("%d is not a Prime Number.", num);
    }
    else
    {
        for(i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            printf("%d is a Prime Number.", num);
        else
            printf("%d is not a Prime Number.", num);
    }
}
