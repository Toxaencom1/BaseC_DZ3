#include <stdio.h>

/*  Задача 1. Сколько зерен на доске?
Необходимо составить функцию, которая определяет, сколько зерен попросил
положить на N-ую клетку изобретатель шахмат (на 1-ую – 1 зерно, на 2-ую – 2
зерна, на 3-ю – 4 зерна, …)
*/

int seedCalculator(int a)
{    
    int res=1;
    for (int i = 1; i < a; i++)
    {
        res*=2;
    }    
    return res;
    
}

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);    
    printf("Seeds amount = %d\n", seedCalculator(a));
    return 0;
}