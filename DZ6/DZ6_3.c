#include <stdio.h>

/* Задача 3 . Количество 1ц
Дано натуральное число N. Посчитать количество «1» в двоичной записи
числа.

P.S В ТЗ нет требования решения рекурсивным методом!!!
*/

int trueBitCounter2(int num, int bitDepth)
{
    int counter = 0;
    if (bitDepth == 0)
    {
        int bit = (num >> bitDepth) & 1;
        if (bit == 1)
            counter++;
        return counter;
    }
    int bit = (num >> bitDepth) & 1;
    if (bit == 1)
        counter++;    
    return counter + trueBitCounter2(num, (bitDepth - 1));
}

int trueBitCounter(int num)
{
    // iterable solve type
    int counter = 0;
    for (int i = 31; i >= 0; i--)
    {
        int bit = (num >> i) & 1;
        if (bit == 1)
            counter++;
    }
    return counter;
}

int main()
{
    int num, res, res2;
    printf("Enter the number: ");
    scanf("%d", &num);
    res = trueBitCounter2(num, 31);
    printf("Bit amount is: %d\n", res);
    res2 = trueBitCounter(num);
    printf("Second method Bit amount is: %d\n", res2);

    return 0;
}