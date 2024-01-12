#include <stdio.h>
#include <stdint.h>
#include <string.h>

/* Задача 5. Поменять местами
Составить функцию, которая меняет в массиве минимальный и максимальный
элемент местами.
*/

void change_max_min(int size, int a[])
{
    int posMax = 0, posMin = 0;
    int max = a[0], min = a[0];
    for (int i = 1; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            posMax = i;
        }
        if (a[i] < min)
        {
            min = a[i];
            posMin = i;
        }
    }
    int tmp = a[posMin];
    a[posMin] = a[posMax];
    a[posMax] = tmp;
}

// void print_array(int size, int arr[])
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     int arr[] = {92, 14, 33, 78, 45, 62, 88, 7, 51, 27, 9, 3, 17, 41, 56};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     print_array(size, arr);

//     change_max_min(size, arr);
//     print_array(size, arr);

//     return 0;
// }
