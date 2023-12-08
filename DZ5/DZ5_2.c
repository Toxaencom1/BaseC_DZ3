#include <stdio.h>

/*  Задача 2. НОД
Составить функцию, которая определяет наибольший общий делитель двух
натуральных и привести пример ее использования
int nod(int a, int b)
*/

int NOD(int num1, int num2)
{
    int firstNum, secondNum, gcd;
    if (num1 < num2)
    {
        firstNum = num1; secondNum = num2;
    }
    else
    {
        firstNum = num2; secondNum = num1;
    }    
    for (gcd = firstNum; gcd > 1; gcd--) // GCD can be equal 1, but i think, this is not logical    
    {
        if (firstNum % gcd == 0 && secondNum % gcd == 0)        
            return gcd;        
        else        
            continue;        
    }
    return 0;
}

int main()
{
    int num1, num2, res;
    printf("Enter the numbers: ");
    scanf("%d%d", &num1, &num2);
    res = NOD(num1, num2);
    (res != 0)? printf("GCD is: %d\n", res): printf("This numbers do not have GCD");    
    return 0;
}