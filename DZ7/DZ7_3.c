#include <stdio.h>

/* Задача 3. Циклический сдвиг массива вправо на 4
Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4
элемента.
*/

void rigthSlide(int *arr, int size)
{
    int temp = *(arr + size - 1);

    for (int *ptr = arr + size - 1; ptr > arr; ptr--)
    {
        *ptr = *(ptr - 1);
    }
    *arr = temp;
}

int main()
{
    int length = 12;
    int arr[length];
    // Scan array
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    int slide = 4;

    // // Iterable type
    // for (int i = 0; i < slide; i++)
    // {
    //     int temp = arr[length - 1];
    //     for (int i = length - 1; i > 0; i--)
    //     {
    //         arr[i] = arr[i - 1];
    //     }
    //     arr[0] = temp;
    // }

    // Pointer type
    for (int i = 0; i < slide; i++)
    {
        rigthSlide(arr, length);
    }

    // Print array
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}