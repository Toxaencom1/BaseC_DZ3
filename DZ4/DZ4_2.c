#include <stdio.h>
#include <inttypes.h>

/*
    Задача 2. Ровно три цифры
Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.
Данные на входе: Целое положительное число
Данные на выходе: Одно слово: YES или NO
*/
int main()
{
    int a;
    printf("Enter the number: ");
    do
    {
        scanf("%d", &a);
        if (a < 0 )
        {
            printf("Incorrect number\nEnter the number: ");
        }
    } while (a < 0 );

    printf((a>99 && a<1000)?"Yes":"No");
        
    return 0;
}
