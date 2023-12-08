#include <stdio.h>

/*  Задача 4. Сумма от 1 до N
Составить функцию, которая определяет сумму всех чисел от 1 до N и
привести пример ее использования.
*/

int allNumbersSumm(int num)
{
    int res = 0;
    for (int i = 1; i <= num; i++)
    {
        res += i;
    }
    return res;
}

int main()
{
    int num;
    printf("Enter the number: ");
    do
    {
        scanf("%d", &num);
        if (num < 0)
        {
            printf("Incorrect number\nEnter the number: ");
        }
    } while (num < 0);

    printf("Sum of all numbers from 1 till %d is: %d", num, allNumbersSumm(num));

    return 0;
}