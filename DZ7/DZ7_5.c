#include <stdio.h>

/* Задача 5. Вторая с конца ноль
Считать массив из 10 элементов и отобрать в другой массив все числа, у
которых вторая с конца цифра (число десятков) – ноль.
*/

int main()
{
    int length = 10;
    int arr[length];
    int arr2[length];

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    int counter = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] / 10 % 10 == 0)
        {
            arr2[counter] = arr[i];
            counter++;
        }
    }

    for (int i = 0; i < counter; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}