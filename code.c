#include <stdio.h>
int main()
{

    int n, result, rem, number;

    printf("Enter a number: ");
    scanf("%d", &number);

    n = number;
    result = 0;
    while (n != 0)
    {

        rem = n % 10;
        result = result * 10 + rem;
        n = n / 10;
    }
    if (result == number)
    {
        printf("%d is a palindrome number.\n", number);
    }
    else
    {
        printf("%d is not a palindrome number.\n", number);
    }
}