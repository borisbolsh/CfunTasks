#include <stdio.h>
#include <stdlib.h>
int fact(int n);

int main()
{
    int number = 0;
    printf("Enter any number: ");
    scanf("%d", &number);
    printf("Factoril %d = %d\n", number, fact(number));

    return 0;
}

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
    {
        return n * fact(n - 1);
    }
}