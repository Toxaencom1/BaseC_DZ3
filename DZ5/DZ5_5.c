#include <stdio.h>

/* Задача 5*. Скобки
Проверить строку состоящую из скобок "(" и ")" на корректность.
Данные на входе: На вход подается строка состоящая из символов '(', ')'
и заканчивающаяся символом '.'. Размер строки не более 1000 символов.
Данные на выходе: Необходимо напечатать слово YES если скобки
расставлены верно и NO в противном случае.
*/

int countOpen = 0;
int countClose = 0;

void countersIncrement(char c)
{        
    if (c == '(')
        countOpen++;
    if (c == ')')
        countClose++;
}

int main()
{
    char c;    
    while ((c = getchar()) != '.' )
    {
        if(countOpen<countClose){            
            break;    
        }
        countersIncrement(c);
    }
    printf("%s",(countOpen == countClose)?"Yes":"No");    
    return 0;
}