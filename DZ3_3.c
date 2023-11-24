#include <stdio.h>
#include <inttypes.h>

/*
Задача 3. В порядке возрастания
Ввести три числа и определить, верно ли, что они вводились в порядке
возрастания.
Данные на входе: Три целых числа
Данные на выходе: Одно слово YES или NO
*/
int main()
{
    int a, b, c;
    printf("Enter tree numbers (delimiter - space): ");
    scanf("%d%d%d", &a, &b, &c);
    a < b &&b < c ? printf("YES") : printf("NO");

    return 0;
}
