#include <stdio.h>
int main(void)
{
    char sex;
    int a, h, w;
    double bov_m, bov_f;

    scanf("%c", &sex); // считываем целое значение в переменную age

    scanf("%d", &a); // считываем целое значение в переменную age

    scanf("%d", &h); // считываем  значение в переменную height

    scanf("%d", &w); // считываем значение в переменную weight

    switch (sex)
    {
    case 'f':
        bov_f = 10 * w + 6.25 * h - 5 * a - 161;
        printf("|  BMR  |\n");
        printf("|%7.2f|\n", bov_f);
        break;
    case 'm':
        bov_m = 10 * w + 6.25 * h - 5 * a + 5;
        printf("|  BMR  |\n");
        printf("|%7.2f|\n", bov_m);
        break;
    default:
        printf("ERROR!\n");
        break;
    }

    return 0;
}