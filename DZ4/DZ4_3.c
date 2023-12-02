#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

/*
   Задача 3. Все цифры четные
Ввести целое число и определить, верно ли, что все его цифры четные
Данные на входе: Одно целое число
Данные на выходе: YES или NO
*/
int main()
{
    int a,num;
    printf("Enter the number: ");
    do
    {
        scanf("%d", &a);
        if (a < 0 )
        {
            printf("Incorrect number\nEnter the number: ");
        }
    } while (a < 0 );
    bool flag = true;
    while (a!=0)
    {
        num=a%10;
        if (num%2!=0)
        {
            flag = false;
            break;
        }
        a/=10; 
    }
    printf("All numbers is even? - ");
    printf((flag)?"Yes":"No");
        
    return 0;
}
