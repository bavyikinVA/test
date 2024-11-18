/*

// Функция calloc(n, m) - выделение памяти под n элементов m байтов каждому.

#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    // выделяем память для одного объекта int
    int *ptr = calloc(1, sizeof(int));
    
    if(ptr)
    {
        // calloc устанавливает значение по умолчанию - 0
        printf("Initial value: %d \n", *ptr);  // Initial value: 0
        // устанавливаем новое значение
        *ptr = 15;
        // получаем новое значение
        printf("New value: %d", *ptr);      // New value: 15
    }
 
    free(ptr);
    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    // выделяем память для 4-х объектов int
    int n = 4;
    int *ptr = calloc(n, sizeof(int));
    if(ptr)
    {
        // устанавливаем значения
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