#include <stdio.h>
#include <inttypes.h>


/*
   Задача 4. Перевернуть число
Ввести целое число и «перевернуть» его, так чтобы первая цифра стала
последней и т.д.
Данные на входе: Целое неотрицательное число
Данные на выходе: Целое неотрицательное число наоборот
*/
int main()
{
    int a,b,c=0;
    printf("Enter the number: ");
    do
    {
        scanf("%d", &a);
        if (a < 0 )
        {
            printf("Incorrect number\nEnter the number: ");
        }
    } while (a < 0 );
    
    while (a!=0)
    {
        b=a%10;
        c+=b;        
        a/=10;
        c*=10;
    }
    c/=10;
    printf("\n%d",c);
        
    return 0;
}
