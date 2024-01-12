#include <stdio.h>
#include <stdint.h>
#include <string.h>

/* Задача 7*. Клетки
Известно, что шахматная доска имеет размерность 8х8 и состоит из клеток 2х
цветов, например, черного и белого (см. рисунок). Каждая клетка имеет
координату, состоящую из буквы и цифры. Горизонтальное расположение
клетки определяется буквой от A до H, а вертикальное – цифрой от 1 до 8.
Заметим, что клетка с координатой А1 имеет черный цвет. Требуется по
заданной координате определить цвет клетки.
*/

int main()
{
    int a[8][8] = {
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1}};
    int size = sizeof(a) / sizeof(a[0]);

    printf("Enter the value Chess desk cell, letter must be Upper Case\n");

    char letter = ' ',
         number = ' ',
         c,
         ch;
    while ((c = getchar()) != '\n')
    {
        if (c >= '0' && c <= '8')
        {
            printf("Wrong input");
            return 0;
        }

        if (c >= 'A' && c <= 'H')
        {
            letter = c;
            break;
        }
        else
        {
            printf("Wrong input");
            return 0;
        }
    }

    while ((ch = getchar()) != '\n')
    {
        if (ch >= 'A' && ch <= 'H')
        {
            printf("Wrong input");
            return 0;
        }
        if (ch >= '1' && ch <= '8')
        {
            number = ch;
            break;
        }
    }

    printf("You choice is: %c%c", letter, number);

    int leter_number = letter - 'A' + 1;
    int number_number = number - '0';

    printf((a[number_number - 1][leter_number - 1] == 1) ? "\nBLACK" : "\nWHITE");

    return 0;
}
