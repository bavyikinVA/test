/*
#include <stdio.h>

// описание (прототип функции)
void hello(void);

void world()
{
    printf("world!");
}

int main(void)
{   
    hello();
    return 0;
}

void hello()
{
    printf("Hello ");
    world();
}
*/

/*
#include <stdio.h>
 
// прототип функции print_message
void print_message(char[]);
 
int main(void)
{
    print_message("Hello METANIT.COM!");
}
// определение функции print_message
void print_message(char message[]) // функция принимает на вход массив символов (строку message)
{
    printf("%s\n", message);
}
*/

/*

#include <stdio.h>
 
int calculate(int x, int y, char operation)
{
    if(operation=='+')
    {
        return x + y;
    }
    else if(operation=='-')
    {
        return x - y;
    }
    else
    {
        return 0;
    }
}
 
int main(void)
{
    int x = 30;
    int y = 10;
    int result1 = calculate(x, y, '+');
    int result2 = calculate(x, y, '-');
    int result3 = calculate(x, y, 'g');
 
    printf("%d + %d = %d \n", x, y, result1);
    printf("%d - %d = %d \n", x, y, result2);
    printf("%d \n", result3);
}

*/

#include <stdio.h>
  
// функция ожидает получить массив как минимум из 4 элементов
void twice(int numbers[4])
{
    for(size_t i = 0; i < 4; i++)
    {
        numbers[i]= numbers[i] * 2;
        printf("%d \t", numbers[i] * 2);
    }
}
int main(void)
{
    int nums[5] = {1, 2, 3, 4, 5};
    twice(nums);
    return 0;
}