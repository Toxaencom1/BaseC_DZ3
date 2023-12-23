#include <stdio.h>

/* Задача 1. Среднее арифметическое чисел
Ввести с клавиатуры массив из 5 элементов, найти среднее арифметическое
всех элементов массива.
*/

int main()
{
    int length = 5;
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == 0)
        {
            printf("The numbers must be not a '0'");
            return 0;
        }
    }

    double res = 0;
    for (int i = 0; i < length; i++)
    {
        res += arr[i];
    }
    printf("%.3f", res / length);
    return 0;
}