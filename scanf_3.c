#include <stdio.h>
 
int main(void)
{
    int age;
    printf("Input your age:");
    scanf("%d", &age);
     
    printf("age = %d", age);
    printf("\n");
    
    printf("%p", &age);
    return 0;
}