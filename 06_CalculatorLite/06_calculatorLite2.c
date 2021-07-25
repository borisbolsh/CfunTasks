#include <stdio.h>

int main(void)
{
    int a, b;
    char c;

    scanf("%d %d %c", &a, &b, &c);

    switch (c)
    {
    case '+':
        printf("%.2lf", (double)a + b);
        break;
    case '-':
        printf("%.2lf", (double)a - b);
        break;
    case '/':
        switch (b)
        {
        case 0:
            printf("ERROR!\n");
            break;
        default:
            printf("%.2lf", (double)a / b);
            break;
        }
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