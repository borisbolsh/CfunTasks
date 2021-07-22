#include <stdio.h>

int main(void)
{
    float rubles, exchangeRate, dollars;

    printf("How many dollars do you want to change?\n");
    scanf("%f", &dollars);

    printf("What exchange rate for RUR?\n");
    scanf("%f", &exchangeRate);

    rubles = dollars * exchangeRate;

    printf("Result: %f\n", rubles);

    return 0;
}
