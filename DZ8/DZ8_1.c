#include <stdio.h>
#include <stdint.h>
#include <string.h>

/* Задача 1. Сортировка по возрастанию
Написать только одну функцию, которая сортирует массив по возрастанию.
Необходимо реализовать только одну функцию, всю программу составлять не
надо.
*/

void sort_array(int size, int a[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
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
//     int size = 9;
//     int arr[] = {8, 4, 3, 1, 6, 5, 7, 9, 2};
//     print_array(size, arr);

//     sort_array(size, arr);
//     print_array(size, arr);

//     return 0;
// }
