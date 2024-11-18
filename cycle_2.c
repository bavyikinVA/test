#include <stdio.h>
 
int main(void)
{
    for (int i = 0; i < 6; i++)  // i - переменная - итератор (счетчик цикла)
    {
        printf("%d", i);
    }

    printf("\n");

    for (int j = 0; j < 9; j++)
    {
        printf("%d * %d = %d \n", j, j,  j * j);
    }

    printf("\n");

    // вложенные циклы
    for (int i = 1; i < 10; i++)
    {
        for(int j = 1; j < 10; j++)
        {
            printf("%d \t", i * j);
        }
        printf("\n");
    }

    /*
    do
    {
        // действия цикла
    }
    while (условие);
    */

    int k = 6;
    do
    {
        printf("%d \n", k);
        k--;
    }
    while (k > 0);
    printf("\n");
    
    /*
    while(условие)
    {
        // выполняемые инструкции, если условие истинно
    }
    */

    int i = 6;
    while (i > 0)
    {
        printf("%d \n", i);
        i--;
    }

    // остановка/выход из цикла break, continue
    int l = 1;
    for ( ; ; )
    {
        printf("%d * %d = %d \n", l, l,  l * l);
        l++;
        if (l > 5) break;
    }

    int result2 = 0;
    for (int g=0; g<10; g++)
    {
        if (g % 2 == 0) continue;
        result2 +=g;
    }
    printf("result2 = %d", result2);  // 25

    return 0;
}