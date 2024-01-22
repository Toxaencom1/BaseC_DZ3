#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Задача 5. Самое длинное слово
В файле .txt дана строка слов, разделенных пробелами. Найти самое длинное
слово и вывести его в файл .txt. Случай, когда самых длинных слов может быть
несколько, не обрабатывать.
Данные на входе: Строка из английских букв и пробелов. Не более
1000 символов.
Данные на выходе: Одно слово из английских букв
*/

void count_a_endings(char* str, char* res)
{
    int counter = 0;
    int max_count = 0;
    int max_begin_index = 0;
    int max_begin_index_next = 0;
    int len = strlen(str);
    
    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' ')
        {
            counter++;
        }
        else
        {
            if (counter > max_count)
            {
                max_count = counter;
                max_begin_index = max_begin_index_next;
                max_begin_index_next = i + 1;                
            }
            else
            {
                max_begin_index_next = i + 1;
            }
            counter = 0;
        }
    }
    int res_counter=0;
    for (int i = max_begin_index; i < max_begin_index + max_count; i++)
    {
        res[res_counter++] = str[i];        
    }
}

int main()
{
    FILE *file, *f_out;
    file = fopen("in5.txt", "r");
    f_out = fopen("out5.txt", "w");

    if (file == NULL || f_out == NULL)
    {
        perror("File opening error: ");
        return 1;
    }

    char buffer[1001];
    char res[1001] = {0};

    fscanf(file, "%[^\n]", buffer);

    printf("%s\n", buffer);
    count_a_endings(buffer,res);
    fprintf(f_out,"%s\n", res);

    fclose(file);
    fclose(f_out);
    return 0;
}
