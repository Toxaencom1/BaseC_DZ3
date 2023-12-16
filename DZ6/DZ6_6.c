#include <stdio.h>

/* Задача 6. Возвести в степень
Написать рекурсивную функцию возведения целого числа n в степень p.
int recurs_power(int n, int p)
Используя данную функцию, решить задачу.
Данные на входе: Два целых числа -100 >= n >= 100 и 0 >= p >= 100
Данные на выходе: Одно целое число n в степени p
*/

int recurs_power(int n, int p)
{
    if (p == 1)
        return n;
    return n * recurs_power(n, p - 1);
}

int main()
{
    int n, p; 
    printf("Enter two integers -100 >= n >= 100 and 0 >= p >= 100: ");   
    do
    {
        scanf("%d%d", &n, &p);
        if (!(n >= -100 && n <= 100) || !(p >= 0 && p <= 100))
        {
            printf("Incorrect numbers\nEnter the numbers: ");
        }
    } while (!(n >= -100 && n <= 100) || !(p >= 0 && p <= 100));

    printf("%d", recurs_power(n, p));
    return 0;
}