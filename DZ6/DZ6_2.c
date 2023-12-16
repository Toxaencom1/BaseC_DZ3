#include <stdio.h>

/* Задача 2. От A до B
Составить рекурсивную функцию. Выведите все числа от A до B
включительно, в порядке возрастания, если A < B, или в порядке убывания в
противном случае.
*/

void print_num(int numA, int numB)
{
    if (numB != numA)
    {
        if (numA < numB)
        { 
            print_num(numA, numB - 1);
            printf("%d ", numB);
        }
        else if (numA > numB)
        {
            printf("%d ", numA);
            print_num(numA - 1, numB);
        }
    }
    else
    {
        printf("%d ", numB);
    }    
}

int main()
{
    int numA, numB;
    printf("Enter the numbers: ");
    scanf("%d%d", &numA, &numB);
    print_num(numA, numB);
    return 0;
}