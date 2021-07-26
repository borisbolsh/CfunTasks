#include <stdio.h>

int main()
{
    int numb1, numb2, temp;

    printf("Enter the first number: \n");
    scanf("%d", &numb1);

    printf("Enter the second number: \n");
    scanf("%d", &numb2);

    temp = numb1;
    numb1 = numb2;
    numb2 = temp;

    printf("After the change: \n");
    printf("First: %d \n", numb1);
    printf("Second: %d \n", numb2);

    return 0;
}