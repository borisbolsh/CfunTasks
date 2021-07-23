#include <stdio.h>

int main()
{
    int sideA, sideB, rectanglePerimeter;

    printf("Enter side A length\n");
    scanf("%d", &sideA);

    printf("Enter side B length\n");
    scanf("%d", &sideB);

    rectanglePerimeter = (sideA + sideB) * 2;

    printf("Result: %d", rectanglePerimeter);

    return 0;
}