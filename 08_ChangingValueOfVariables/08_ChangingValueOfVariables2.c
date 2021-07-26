#include <stdio.h>

int main()
{
    double numb1, numb2;

    printf("Enter the first number: \n");
    scanf("%lf", &numb1);

    printf("Enter the second number: \n");
    scanf("%lf", &numb2);

    numb1 = numb1 - numb2;
    numb2 = numb1 + numb2;
    numb1 = numb2 - numb1;

    printf("After the change: \n");
    printf("First: %.2lf \n", numb1);
    printf("Second: %.2lf \n", numb2);

    return 0;
}