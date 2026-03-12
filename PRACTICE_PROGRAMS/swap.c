/*
    WAP to swap two numbers using call by value and call by reference.
*/
#include <stdio.h>

void swapByValue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swapByReference(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Original numbers: num1 = %d, num2 = %d\n", num1, num2);

    // Swap using call by value
    swapByValue(num1, num2);
    printf("After swapping by value: num1 = %d, num2 = %d\n", num1, num2);
    // Swap using call by reference
    swapByReference(&num1, &num2);
    printf("After swapping by reference: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}