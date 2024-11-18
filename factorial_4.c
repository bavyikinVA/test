#include <stdio.h>

// рекурсивная функция факториала 
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
  
int main(void)
{
    int factorial4 = factorial(4);  // 24
    int factorial5 = factorial(5);  // 120
    int factorial6 = factorial(6);  // 720
    printf("factorial of 4: %d \n", factorial4);
    printf("factorial of 5: %d \n", factorial5);
    printf("factorial of 6: %d \n", factorial6);
      
    return 0;
}