#include <stdio.h>

int main(void)
{
    int hours;
    int minutes;
    int secondes;

    printf("Enter hours\n");
    scanf("%d", &hours);

    printf("Enter minutes\n");
    scanf("%d", &minutes);

    printf("Enter seconds\n");
    scanf("%d", &secondes);

    int seconds = hours * 60 * 60 + minutes * 60 + secondes;

    printf("Result: %d seconds\n", seconds);

    return 0;
}
