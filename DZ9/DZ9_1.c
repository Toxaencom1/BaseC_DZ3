#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Задача 1. По одному разу
В файле .txt даны два слова не более 100 символов каждое, разделенные
одним пробелом. Найдите только те символы слов, которые встречаются в
обоих словах только один раз. Напечатайте их через пробел в файл .txt в
лексикографическом порядке.
Данные на входе: Два слова из маленьких английских букв через
пробел. Длинна каждого слова не больше 100 символов.
Данные на выходе: Маленькие английские буквы через пробел.

*/

char *remove_non_uniq_letters(char first[])
{
    int len = strlen(first);
    char uniq_letters_str[100];
    int k = 0;

    for (int i = 0; i < len; i++)
    {
        int count = 0;

        for (int j = 0; j < len; j++)
        {
            if (first[i] == first[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            uniq_letters_str[k++] = first[i];
        }
        count = 0;
    }

    uniq_letters_str[k] = '\0';

    char *result = strdup(uniq_letters_str);
    return result;
}

void find_results(char first[], char second[], char *result)
{
    first = remove_non_uniq_letters(first);
    second = remove_non_uniq_letters(second);
    int first_len = strlen(first);
    int second_len = strlen(second);
    int result_c = 0;
    for (int i = 0; i < first_len; i++)
    {
        for (int j = 0; j < second_len; j++)
        {
            if (first[i] == second[j])
            {
                result[result_c++] = first[i];
            }
        }
    }
}

int compareChars(const void *a, const void *b)
{
    return (*(char *)a - *(char *)b);
}

int main()
{
    FILE *file, *f_out;
    file = fopen("in.txt", "r");
    f_out = fopen("out.txt", "w");
    if (file == NULL || f_out == NULL)
    {
        perror("File opening error: ");
        return 1;
    }

    char first[100];
    char second[100];
    char result[30] = {0};

    fscanf(file, "%s %s", first, second);

    find_results(first, second, result);

    int resultLength = strlen(result);
    qsort(result, resultLength, sizeof(char), compareChars);

    for (int i = 0; i < resultLength; i++)
    {
        fprintf(f_out, "%c ", result[i]);
    }

    fclose(file);
    fclose(f_out);
    return 0;
}
