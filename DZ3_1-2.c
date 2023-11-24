#include <stdio.h>
#include <inttypes.h>

/*
P.S - Задачи похоже объединил в одну
Задача 1 - 2. Наибольшее и наименьшее из пяти чисел
Ввести пять чисел и вывести наибольшее и наименьшее из них

Данные на входе: Пять целых чисел разделенных пробелом
Данные на выходе: Одно целое число
*/
int main()
{
    int a, b, c, d, e;
    printf("Enter five numbers (delimiter is space): ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    int arr[5] = {a, b, c, d, e};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    } // bubble sort
    printf("%d - Max\n", arr[n - 1]);
    printf("%d - Min\n", arr[0]);

    return 0;
}
