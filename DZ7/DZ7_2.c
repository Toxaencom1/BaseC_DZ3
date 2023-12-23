#include <stdio.h>

/* Задача 2. Найти минимум
Ввести с клавиатуры массив из 5 элементов, найти минимальный из них.
*/

int main()
{
    int length = 5;
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    for (int i = 1; i < length; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d", min);
    return 0;
}