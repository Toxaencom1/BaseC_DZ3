#include <stdio.h>
#include <inttypes.h>

/*
    Задача 1. Сумма квадратов маленьких чисел
Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a
до b.
Данные на входе: Два целых числа по модулю не больше 100
Данные на выходе: Сумма квадратов от первого введенного числа до
второго
*/
int main()
{
    int a,b,res=0;
    printf("Enter the numbers 'a' and 'b': ");
    do
    {
        scanf("%d%d", &a,&b);
        if (a > b || a<0 || a>100 || b>100)
        {
            printf("Incorrect numbers\nEnter the number: ");
        }
    } while (a > b || a<0 || a>100 || b>100);

    while (a<=b)
    {
        res += a*a; 
        a++;
    }
    printf("The sum of the squares is: %d", res);
        
    return 0;
}
