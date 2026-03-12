// Write a program to input a number and check whether it is prime or not using a function.
#include <stdio.h>

// Function to check prime
int isPrime(int num)
{
    if (num <= 1)
        return 0;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number))
        printf("%d is a Prime number.\n", number);
    else
        printf("%d is NOT a Prime number.\n", number);

    return 0;
}