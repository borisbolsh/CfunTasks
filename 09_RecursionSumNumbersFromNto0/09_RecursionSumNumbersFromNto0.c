#include <stdio.h>
int sumNumbersFromNto0(int n);

int main()
{
    int number;

    printf("Enter any integer: \n");
    scanf("%d", &number);

    printf("Sum from %d to 0: %d\n", number, sumNumbersFromNto0(number));

    return 0;
}

int sumNumbersFromNto0(int n)
{
    if (n != 0)
        return n + sumNumbersFromNto0(n - 1);
    else
        return 0;
}