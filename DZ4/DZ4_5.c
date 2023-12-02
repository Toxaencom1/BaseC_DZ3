#include <stdio.h>
#include <inttypes.h>


/*
   Задача 5. Все счастливые числа
Ввести натуральное число и напечатать все числа от 10 до введенного числа -
у которых сумма цифр равна произведению цифр
Данные на входе: Одно натуральное число большее 10
Данные на выходе: Числа у которых сумма цифр равна произведению
цифр через пробел в порядке возрастания. Не превосходящие введенное
число.
*/
int main()
{
    int a,num,fullNum;
    printf("Enter the number: ");
    do
    {
        scanf("%d", &a);
        if (a < 0 )
        {
            printf("Incorrect number\nEnter the number: ");
        }
    } while (a < 0 );
    
    
    printf("Result is: ");
    for (int j = 10; j <= a; j++)
    {
        fullNum=j;
        int arr[10];
        int counter = 0;
        while (fullNum!=0)
        {
            num=fullNum%10;
            arr[counter] = num;
            counter++;            
            fullNum/=10;            
        }
        int multy=1,sum=0;
        for (int i = 0; i < counter; i++)
        {            
            multy*=arr[i];
            sum+=arr[i];
        }     
        
        if (multy==sum)
        {
            printf("%d ",j);
        }
        multy=1;
        sum=0;
        counter=0;        
    }

    return 0;
}
