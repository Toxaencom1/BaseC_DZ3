#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Задача 2. Заменить a на b
В файле .txt дана символьная строка не более 1000 символов. Необходимо
заменить все буквы "а" на буквы "b" и наоборот, как заглавные, так и
строчные. Результат записать в .txt.
Данные на входе: Строка из маленьких и больших английских букв,
знаков препинания и пробелов.
Данные на выходе: Строка из маленьких и больших английских
букв, знаков препинания и пробелов.
*/

int main()
{
    FILE *file, *f_out;
    file = fopen("in2.txt", "r");
    f_out = fopen("out2.txt", "w");
    if (file == NULL || f_out == NULL)
    {
        perror("File opening error: ");
        return 1;
    }

    ;
    char buffer[1001];
    fscanf(file, "%[^\n]", buffer);

    printf("%s\n", buffer);
    int len = strlen(buffer);

    for (int i = 0; i < len; i++)
    {
        switch (buffer[i])
        {
        case 'a':
            buffer[i] = 'b';
            break;
        case 'A':
            buffer[i] = 'B';
            break;
        case 'b':
            buffer[i] = 'a';
            break;
        case 'B':
            buffer[i] = 'A';
            break;        
        default:            
            break;
        }
    }
    fprintf(f_out,"%s\n", buffer);

    fclose(file);
    fclose(f_out);
    return 0;
}
