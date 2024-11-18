// логические операторы ==, !=, >, <, >=, <=
#include <stdio.h>
  
int main(void)
{
    // оператор равно ==
    int a = 10;
    int b = 4;
    int c1 = a == b;                 // 0 - числа НЕ равны
    printf("c1 = %d \n", c1);         // c1 = 0
 
    int num = 5;
    int result = num == 2 + 3;      // 1 - числа равны
    printf("result = %d \n", result);     // result = 1
    
    // оператор НЕ равно !=
    printf("!= \n");
    int c2 = 10 != 4;    // 1
    printf("c2 = %d \n", c2);
    int d2 = 4 != 4;
    printf("d2 = %d \n", d2);
    
    // оператор Больше >
    printf("> \n");
    int c3 = 10 > 4;    // 1
    printf("c3 = %d \n", c3);
    int d3 = 3 > 4;
    printf("d3 = %d \n", d3); //0

    // оператор Меньше <
    printf("< \n");
    int c4 = 10 < 4;    // 1
    printf("c4 = %d \n", c4);
    int d4 = 3 < 4;
    printf("d4 = %d \n", d4); //0

    // оператор >=, <=
    printf("<= \n");
    int c5 = 10 <= 4; // 0
    printf("c5 = %d \n", c5);
    int c6 = 10 >= 4; // 1
    printf("c6 = %d \n", c6);


    // логические операции
    printf("logic NOT (!) \n");
    int c7 = !1; // 0
    int d7 = !0; // 1
    printf("c7 = %d \n", c7);
    printf("d7 = %d \n", d7);
    

    printf("logic AND (&&) \n");
    int c8 = -2 && 5;    // 1     True && True = True, False && False = False, True && False = 0
    int d8 = 0 && 7;     // 0
    printf("c8 = %d \n", c8);
    printf("d8 = %d \n", d8);

    printf("logic OR (||) \n");
    int c9 = -2 || 5;    // 1
    int d9 = 0 || 7;     // 1
    int e9 = 0 || 0;     // 0
    printf("c9 = %d \n", c9);
    printf("d9 = %d \n", d9);
    printf("e9 = %d \n", e9);

    int a10 = -2 > 5;          // 0
    int b10 = 0 < 7;           // 1
    int c10 = 0 == 0;          // 1
    int d10 = a10 && b10 || c10;        // 1
 
    printf("a10 = %d \n", a10);
    printf("b10 = %d \n", b10);
    printf("c10 = %d \n", c10);
    printf("d10 = %d \n", d10);

    return 0;
}