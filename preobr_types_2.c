#include <stdio.h>
  
int main(void)
{
    int number1 = 10; 
    double number2 = 4;
    double result = number1 + number2;
    printf("result = %f \n", result);     // result = 14.000000 тип int автоматически превращается в double

    int a = 10;
    int b = 4;
    int c = a / b;                     // 2
    double d = a / b;               // 2.00000
    double e = (double)a / (double)b;   // 2.50000
    printf("c = %d \n", c);
    printf("d = %f \n", d);
    printf("e = %f \n", e);

    int number3 = 70;
    char symbol = (char) number3;
    printf("symbol = %c \n", symbol);           //  F
    printf("symbol (int code) = %d \n", symbol);    // 70

    int number4 = 300;
    char symbol2 = number4;    // потеря точности - число number1 усекается до 1 байта
    printf("symbol2 = %d \n", symbol2);     // code = 44
    
    return 0;
}