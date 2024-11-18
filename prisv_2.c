#include <stdio.h>
  
int main(void)
{
    int a, b, c;    
    a = b = c = 34 + 7;
    printf("a = %d \n", a);
    printf("b = %d \n", b);
    printf("c = %d \n", c);
    
    int d = 5;
    d += 10;        // 15
    // то же самое d = d + 10;
    printf("d = %d \n", d);
    d -= 3; 
    // то же самое d = d - 3;        // 12
    printf("d = %d \n", d);
    d *= 2;         // 24
    printf("d = %d \n", d);
    d /= 6;         // 4
    printf("d = %d \n", d);
    d <<= 4;      // 64 - сдвиг влево на 4 разряда (в битах)
    printf("d = %d \n", d);
    d >>= 2;      // 16 - сдвиг вправо на 2 разряда (в битах)
    printf("d = %d \n", d);
    return 0;
}