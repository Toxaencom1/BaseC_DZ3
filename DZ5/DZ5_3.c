#include <stdio.h>

/*  Задача 3. Сумма цифр равна произведению
Составить логическую функцию, которая определяет, верно ли, что в заданном
числе сумма цифр равна произведению.
int is_happy_number(int n)
*/
int is_happy_number(int n)
{
    int arr[10];
    int num, counter = 0;
    while (n != 0)
    {
        num = n % 10;
        arr[counter] = num;
        counter++;
        n /= 10;
    }
    int multy = 1, sum = 0;
    for (int i = 0; i < counter; i++)
    {
        multy *= arr[i];
        sum += arr[i];
    }

    if (multy == sum)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int fullNum;
    printf("Enter the number: ");
    do
    {
        scanf("%d", &fullNum);
        if (fullNum < 0)
        {
            printf("Incorrect number\nEnter the number: ");
        }
    } while (fullNum < 0);

    int res = is_happy_number(fullNum);
    (res != 0) ? printf("Yes") : printf("No");

    return 0;
}