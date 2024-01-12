#include <stdio.h>
#include <stdint.h>
#include <string.h>

/* Задача 6. Больше среднего
Определить количество положительных элементов квадратной матрицы,
превышающих по величине среднее арифметическое всех элементов главной
диагонали. Реализовать функцию среднее арифметическое главной
диагонали.
*/
double arithmetic_average_of_the_main_diagonal(int size, int a[size][size])
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i][i];
    }
    return sum / size;
}

int amount_numbers_of_more_than_avg(int size, int a[size][size])
{
    int counter = 0;
    double more_than = arithmetic_average_of_the_main_diagonal(size, a);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (a[i][j] > more_than && a[i][j]>0)
            {
                counter++;
            }
        }
    }
    return counter;
}

void print_2d_array(int size, int arr[size][size])
{
    printf("{\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("}\n");
}

int main()
{   
    int size;
    scanf("%d",&size);
    int arr[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &arr[i][j]);
        }        
    }    

    print_2d_array(size, arr);

    int amount = amount_numbers_of_more_than_avg(size, arr);

    printf("%d", amount);

    return 0;
}
