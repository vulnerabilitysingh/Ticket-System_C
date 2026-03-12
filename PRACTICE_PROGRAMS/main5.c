//WAP to enter your name and find out its length (using strings)
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int length;

    printf("Enter your name: ");
    scanf("%s", name);

    length = strlen(name);
    printf("Length of the name is: %d\n", length);

    return 0;
}