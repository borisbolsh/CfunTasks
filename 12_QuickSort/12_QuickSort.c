#include <stdio.h>
void quickSort(int *mas, int size);

int main()
{

    int a[] = {15, 14, 13, 12, 11, 5, 4, 3, 2, 1};
    int size = sizeof(a) / sizeof(a[0]);
    quickSort(a, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}

void quickSort(int *mas, int size)
{
    int i = 0;
    int j = size - 1;

    int middle = mas[size / 2];

    do
    {
        while (mas[i] < middle)
        {
            i++;
        }

        while (mas[j] > middle)
        {
            j--;
        }

        if (i <= j)
        {
            int temp = mas[i];
            mas[i] = mas[j];
            mas[j] = temp;

            i++;
            j--;
        }

    } while (i <= j);

    if (j > 0)
    {
        quickSort(mas, j + 1);
    }
    if (i < size)
    {
        quickSort(&mas[i], size - i);
    }
}