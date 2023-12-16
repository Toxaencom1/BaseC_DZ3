#include <stdio.h>

/* Задача 4. Все нечетные
Дана последовательность целых чисел через пробел, завершающаяся числом
0. Выведите все нечетные числа из этой последовательности, сохраняя их
порядок.

P.S В ТЗ нет требования решения рекурсивным методом!!!
*/

void oddNumbers(int i, int n, int arr[])
{
    if (i == n)
        return;
    if (arr[i] % 2 != 0)
        printf("%d ", arr[i]);
    oddNumbers(i + 1, n, arr);
}

int main()
{
    int arr[100];
    int num;
    int j = 0;
    printf("Enter the sequence of non-zero integers: ");
    scanf("%d", &num);
    while (num != 0)
    {
        arr[j] = num;
        j++;
        scanf("%d", &num);
    }
    oddNumbers(0,j,arr);

    //// iterable solve type
    // for (int i = 0; i < j; i++)
    // {
    //     if (arr[i] % 2 != 0)
    //     {
    //         printf("%d ", arr[i]);
    //     }
    // }
    return 0;
}