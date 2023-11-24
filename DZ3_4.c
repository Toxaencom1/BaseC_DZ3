#include <stdio.h>
#include <inttypes.h>

/*
 Задача 4. Какое время года
Ввести номер месяца и вывести название времени года.
Данные на входе: Целое число от 1 до 12 - номер месяца.
Данные на выходе: Время года на английском: winter, spring, summer, autumn
*/
int main()
{
    int a;
    printf("Enter the number: ");
    do
    {
        scanf("%d", &a);
        if (a < 1 || a > 12)
        {
            printf("Incorrect number\nEnter the number: ");
        }
    } while (a < 1 || a > 12);

    if (a == 1 || a == 2 || a == 12)
    {
        printf("Winter");
    }
    else if (a >= 3 && a <= 5)
    {
        printf("Spring");
    }
    else if (a >= 6 && a <= 8)
    {
        printf("Summer");
    }
    else if (a >= 9 && a <= 11)
    {
        printf("Autumn");
    }

    return 0;
}
