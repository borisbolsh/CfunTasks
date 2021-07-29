#include <stdio.h>

int main()
{
    FILE *file, *file2;
    int A, B, res;

    file = fopen("input.txt", "r");
    if (file == NULL)
        printf("fopen Read Error!");
    else
    {
        fscanf(file, "%d", &A);
        fscanf(file, "%d", &B);
    }
    fclose(file);

    res = A + B;

    file2 = fopen("output.txt", "w");
    fprintf(file2, "%d", res);
    fclose(file2);

    return 0;
}