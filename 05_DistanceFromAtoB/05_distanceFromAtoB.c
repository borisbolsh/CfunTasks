#include <stdio.h>
#include <stdlib.h>

int main()
{
    int one, two, res;

    scanf("%d", &one);
    scanf("%d", &two);

    res = abs(one - two);

    printf("%d", res);

    return 0;
}