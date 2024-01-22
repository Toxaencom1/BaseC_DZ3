#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Задача 3. Числа в массив
В файле .txt дана строка, не более 1000 символов, содержащая буквы, целые
числа и иные символы. Требуется все числа, которые встречаются в строке,
поместить в отдельный целочисленный массив. Например, если дана строка
"data 48 call 9 read13 blank0a", то в массиве числа 48, 9, 13 и 0. Вывести
массив по возрастанию в файл .txt.
Данные на входе: Строка из английских букв, цифр и знаков
препинания
Данные на выходе: Последовательность целых чисел
отсортированная по возрастанию
Пример
Данные на входе: data 48 call 9 read13 blank0a
Данные на выходе: 0 9 13 48
*/
void double_literal_is_space(char *buffer)
{
    int i = 0;
    int len = strlen(buffer);
    for (i = 0; i < len; i++)
    {
        if ((buffer[i] >= 'a' && buffer[i] <= 'z') || (buffer[i] >= 'A' && buffer[i] <= 'Z'))
        {
            buffer[i] = ' ';
        }
    }
}

int compareNumbers(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    FILE *file, *f_out, *f_out_temp;
    file = fopen("in3.txt", "r");
    f_out = fopen("out3.txt", "w");
    f_out_temp = fopen("out_temp3.txt", "w");
    if (file == NULL || f_out == NULL || f_out_temp == NULL)
    {
        perror("File opening error: ");
        return 1;
    }

    char buffer[1001];

    fscanf(file, "%[^\n]", buffer);
    printf("%s\n", buffer);

    double_literal_is_space(buffer);

    printf("|%s|\n", buffer);
    fprintf(f_out_temp, "%s", buffer);
    fclose(f_out_temp);
    f_out_temp = fopen("out_temp3.txt", "r");
    if (f_out_temp == NULL)
    {
        perror("File opening error: ");
        return 1;
    }

    int numbers[100] = {0};
    int numCount = 0;

    while (fscanf(f_out_temp, "%d", &numbers[numCount]) == 1)
    {
        numCount++;
    }

    qsort(numbers, numCount, sizeof(int), compareNumbers);

    for (int i = 0; i < numCount; i++)
    {
        fprintf(f_out,"%d ", numbers[i]);
    }

    fclose(file);
    fclose(f_out);
    fclose(f_out_temp);
    return 0;
}
