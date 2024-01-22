#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Задача 6. Заканчивается на a
В файле .txt дано предложение. Необходимо определить, сколько слов
заканчиваются на букву 'а'. Ответ записать в файл .txt.
Данные на входе: Строка из английских букв и пробелов не более 1000
символов.
Данные на выходе: Одно целое число
*/

int count_a_endings(char *str)
{
    int counter = 0;

    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ' && str[i - 1] == 'a')
        {
            counter++;
        }
        if (i == len - 1 && str[i] == 'a')
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    FILE *file, *f_out;
    file = fopen("in6.txt", "r");
    f_out = fopen("out6.txt", "w");

    if (file == NULL || f_out == NULL)
    {
        perror("File opening error: ");
        return 1;
    }

    char buffer[1001];    

    fscanf(file, "%[^\n]", buffer);

    printf("%s\n", buffer);
    int result = count_a_endings(buffer);    
    
    fprintf(f_out, "%d", result);

    fclose(file);
    fclose(f_out);
    return 0;
}
