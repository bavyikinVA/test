//if (условие) инструкция;
#include <stdio.h>
  
int main(void)
{
    // пример 1
    if(1) printf("Hello C \n");  // 1 = True
      
    if(0) printf("Hello World \n");

    // пример 2
    int n = 10;
 
    if(n == 20) // если n == 20, то выполняется блок ниже 
    {
        printf("n = 20 \n");
    }
    
    if(n == 10) 
    {       
        printf("n = 10 \n");
    }

    // пример 3
    int x = 50;
    int y = 60;
    if (x > 20 && y < 100)
    {
        printf("the condition is true\n");
    }

    /*
    if(условие 1)
        инструкция_1
    else if(условие 2)
        инструкция_2
    else
        инструкция_3
    */

    int x2 = 60;
     
    if(x2 > 60) 
        printf("x2 is greater than 60 \n");
    else if (x2 < 60)
        printf("x2 is less than 60 \n");
    else
        printf("x2 is equal 60 \n");

    /*
    switch(выражение)
    {
        case константа_1: инструкции_1;
        case константа_2: инструкции_2;
        
        default: инструкции;
    }
    */

   //пример 4
   int x3 = 2;
     
    switch(x3)
    {
        case 1: 
            printf("x3 = 1 \n");
            break;
        case 2: 
            printf("x3 = 2 \n");
            break;
        case 3: 
            printf("x3 = 3 \n");
            break;
    }

    // тернарный оператор 
    // 	[первый операнд - условие] ? [второй операнд] : [третий операнд]
    int x4=5;
    int y4=2;
     
    int z = x4 > y4 ? x4-y4 : x4+y4; // если x4 > y4, то z = x4-y4, иначе z = x4 + y4
     
    printf("z = %d", z);        // z = 3


    return 0;
}