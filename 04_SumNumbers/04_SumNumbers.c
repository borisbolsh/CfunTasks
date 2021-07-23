#include <stdio.h>

int main()
{
    int number, firstNum, secondNum, thirdNum, result;

    printf("Enter a triple digits\n");
    scanf("%d", &number);

    firstNum = number / 100;
    secondNum = number % 100 / 10;
    thirdNum = number % 10;

    result = firstNum + secondNum + thirdNum;

    printf("Result: %d", result);

    return 0;
}