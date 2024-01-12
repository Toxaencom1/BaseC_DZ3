#include <stdio.h>
#include <stdint.h>
#include <string.h>

/* Задача 2. Четные в начало
Написать только одну функцию, которая ставит в начало массива все четные
элементы, а в конец – все нечетные. Не нарушайте порядок следования чисел
между собой.
*/

void sort_even_odd(int n, int a[])
{
    int a2[n];
    int ctn1 = 0, cnt2 = n / 2;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            a2[ctn1] = a[i];
            ctn1++;
        }
        else if (a[i] % 2 != 0)
        {
            a2[cnt2] = a[i];
            cnt2++;
        }
    }
    memcpy(a, a2, sizeof(a2));
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
//     int size = 20;
//     int arr[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
//     // int size = 5;
//     // int arr[] = {1,0,1,0,1};
//     print_array(size, arr);

//     sort_even_odd(size, arr);
//     print_array(size, arr);

//     return 0;
// }
