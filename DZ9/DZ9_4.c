#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Задача 4. Удалить повторяющиеся символы
В файле .txt строка из маленьких и больших английских букв, знаков
препинания и пробелов. Требуется удалить из нее повторяющиеся символы и
все пробелы. Результат записать в файл .txt.
Данные на входе: Строка из маленьких и больших английских букв,
знаков препинания и пробелов. Размер строки не более 1000 символов.
Данные на выходе: Строка из маленьких и больших английских
букв.
Пример
Данные на входе: abc cde def
Данные на выходе: abcdef
*/

void double_literal_is_space(char *str)
{
    int count = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
            if (count > 1)
            {
                str[j] = ' ';
                count = 1;
            }
        }
        count = 0;
    }
}

void delete_spaces(char *buffer, char *result)
{
    int count = 0;
    int len = strlen(buffer);
    for (int i = 0; i < len; i++)
    {
        if (buffer[i] != ' ')
        {            
            result[count++] = buffer[i];
        }
    }
}

int main()
{
    FILE *file, *f_out;
    file = fopen("in4.txt", "r");
    f_out = fopen("out4.txt", "w");
    
    if (file == NULL || f_out == NULL)
    {
        perror("File opening error: ");
        return 1;
    }

    char buffer[1001];
    char res[1001] = {0};

    fscanf(file, "%[^\n]", buffer);

    printf("%s\n", buffer);
    double_literal_is_space(buffer);
    delete_spaces(buffer, res);
    fprintf(f_out,"%s\n", res);

    fclose(file);
    fclose(f_out);    
    return 0;
}
