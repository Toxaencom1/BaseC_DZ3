#include <stdio.h>

/* Задача 6. Чаще других
Дан массив из 10 элементов. Определить, какое число в массиве встречается
чаще всего. Гарантируется, что такое число ровно 1.
*/

int main()
{
    int length = 10;
    int arr[length];

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
        printf("Индекс %d, значение %d\n", i,arr[i]);
    }

    int counter_max = 0;
    int currentCount = 0;
    int result;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                currentCount++;
            }
        }
        if (counter_max < currentCount)
        {
            counter_max = currentCount;
            result = arr[i];
        }
        currentCount = 0;
    }

    printf("Most frequent nubmer is: %d\n", result);

    return 0;
}