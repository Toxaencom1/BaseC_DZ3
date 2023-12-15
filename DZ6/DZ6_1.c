#include <stdio.h>

/* Задача 1. В прямом порядке
Дано натуральное число N. Выведите все его цифры по одной, в прямом
порядке, разделяя их пробелами или новыми строками. Необходимо
реализовать рекурсивную функцию.
void print_num(int num)
*/

void print_num(int num)
{
    if (num != 0)
    {
        print_num(num / 10);
        printf("%d ", num % 10);
    }
    return 0;
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    print_num(num);
    return 0;
}