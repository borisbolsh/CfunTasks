#include <stdio.h>

int main(void)
{
    int a, b;
    char c;

    scanf("%c %d %d", &c, &a, &b);

    switch (c)
    {
    case '+':
        printf("%.2lf", (double)a + b);
        break;
    case '-':
        printf("%.2lf", (double)a - b);
        break;
    case '/':
        printf("%.2lf", (double)a / b);
        break;
    case '*':
        printf("%.2lf", (double)a * b);
        break;
    default:
        printf("ERROR!\n");
        break;
    }

    return 0;
}