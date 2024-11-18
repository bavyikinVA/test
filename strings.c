#include <stdio.h>
#include <string.h>
/* 
int main(void)
{
    const char *str1 = "Gello";
    const char *str2 = "Hello";
    int result = strcmp(str1, str2);
    printf("%d \n", result);
    if (result == 0)
    {
        printf("Strings are equal \n");
    }
    else
    {
        printf("Strings are not equal \n");
    }
    return 0;
}
*/

/*
int main(void)
{
    char destination[30] = "Hello ";
    char source[30] = "METANIT.COM";
    strcat(destination, source);
    printf("%s\n", destination);    // Hello METANIT.COM
    return 0;
}
*/
#include <stdio.h>
#include <string.h>
 
int main(void)
{
    int numbers1[] = {1, 2, 3, 4, 5};
    int numbers2[] = {0, 1, 3, 4, 5}; 
 
    int result = memcmp(numbers1, numbers2, sizeof(numbers1));
    printf("%d", result);
    if(!result)
    {
        printf("arrays are equal \n");
    }
    else   
    {
        printf("arrays are not equal \n");
    }
    return 0;
}
