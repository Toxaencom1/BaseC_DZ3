#include <stdio.h>

/* Задача 5. Сколько раз встречается символ a
Дана строка из английских символов, пробелов и знаков препинания. В конце
строки символ точка. Необходимо реализовать рекурсивную функцию,
которая считывает данную строку со стандартного потока ввода и возвращает
целое число – количество символов 'a' в данной строке.
int acounter(void)
*/

int acounter(void)
{
    char c = getchar();
    if (c == '.')
    {
        return 0;
    }
    int counter = (c == 'a') ? 1 : 0;    
    return counter+acounter();
}

int main()
{
    printf("Enter a string consisting of English letters, spaces and punctuation marks. At the end of the line there is a '.': ");
    int counter = acounter();
    printf("%d", counter);

    //// iterable solve type
    // char c;
    // int counter = 0;
    // while ((c = getchar()) != '.')
    // {
    //     if (c == 'a')
    //     {
    //         counter++;
    //     }
    // }
    // printf("%d", counter);
    return 0;
}