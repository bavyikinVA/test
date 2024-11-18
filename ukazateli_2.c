/*
#include <stdio.h>

int main()
{
    int numbers[] = {11, 12, 13, 14}; 
        
    for (size_t i=0; i < sizeof(numbers) / sizeof(numbers[0]); ++i)
    {
        printf("numbers[%d]: %p\n", i, numbers+i);
    }
    return 0;
}
*/

/*
#include <stdio.h>
 
int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
    int second = *(array + 4); // получим второй элемент
    printf("array[1] = %d", second);    // array[1] = 2
 
    return 0;
}
*/


#include <stdio.h>
 
int main(void)
{
    int array[5] = {1, 2, 3, 4, 5};
      
    for(int i = 0; i < 5; i++)
    {
        void* address = array + i;  // получаем адрес i-го элемента массива
        int value = *(array + i);   // получаем значение i-го элемента массива
        printf("array[%d]: address=%p \t value=%d \n", i, address, value);
    }
    return 0;
}


/*
#include <stdio.h>
  
int main(void)
{
    int array[5] = {1, 2, 3, 4, 5};
    int *ptr = array;   // указатель ptr хранит адрес первого элемента массива array
    ptr = ptr + 2;      // перемещаем указатель на 2 элемента вперед
    printf("value: %d \n", *ptr);   // value: 3
    return 0;
}
*/

