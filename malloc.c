/*
// Функция malloc() - выделение памяти в n байтов

#include <stdio.h>
#include <stdlib.h>   // для подключения функции malloc
 
int main(void)
{
    int *ptr = malloc(sizeof(int)); // выделяем память для одного int
    *ptr = 24;      // помещаем значение в выделенную память
 
    printf("%d \n", *ptr);
    free(ptr);
}
*/

#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int n = 4;
    int *ptr = malloc(n * sizeof(int)); // выделяем память для 4-х чисел int
    if(ptr)
    {
        // помещаем значения в выделенную память
        ptr[0] = 1;
        ptr[1] = 2;
        ptr[2] = 3;
        ptr[3] = 5;
        // получаем значения
        for(int i = 0; i < n; i++)
        {
            printf("%d", ptr[i]);
        }
    }
 
    free(ptr);
}
