/*

//пример с открытием и закрытием текстового файла в папке с программой
#include <stdio.h>
 
int main(void)
{
    FILE * fp = fopen("data.txt", "w"); // поток открыт для чтения
    fclose(fp); // поток закрыт для чтения (файл закрыт)
    return 0;
}
*/

/*

//пример с обработкой ошибок (проверка есть ли файл для чтения)
#include <stdio.h>
  
int main(void)
{
    FILE * fp= fopen("data28.txt", "r"); 
    if(fp==NULL)
    {
        perror("Error occured while opening data28.txt");
        return 1;
    }
     
    fclose(fp);
    return 0;
}
*/

/*
#include <stdio.h>
  
int main(void)
{
    // записываемая строка
    char message[] = "Hello METANIT.COM!";
    // файл для записи
    char * filename = "data.txt";
    // находим длину записываемой строки
    int n = sizeof(message)/sizeof(message[0]);
 
    FILE * fp= fopen(filename, "w");
    if(fp) // то же самое что fp != NULL
    {
        // посимвольно записываем в файл
        for(int i=0; i < n; i++)
        {
            putc(message[i], fp);
        }
         
        fclose(fp);
        printf("File has been written\n");
    }
}
*/

/*
#include <stdio.h>
  
int main(void)
{
    // переменная (символ) для считывания
    char c;
    // файл для чтения
    char * filename = "data.txt";
    // указатель на поток 
    FILE * fp= fopen(filename, "r"); // чтение из файла под названием filename
    if(fp)
    {
        // считываем посимвольно из файла
        while((c=getc(fp))!= EOF) // в переменную c записываются по очереди символы из файла и проверяются на конец файла (EOF)
        {
            printf("%c", c);
        }
        fclose(fp);
    }
}
*/

/*
//  пример для записи и чтения структуры в файл и обратно
#include <stdio.h>
#include <stdlib.h>
  
struct person
{
    char name[16];
    int age;
};
  
int save(char * filename, struct person *p);
int load(char * filename);
  
int main(void)
{
    char * filename = "person.dat";
    struct person tom = { "Jason Statham", 15 };
  
    save(filename, &tom);
    load(filename);
      
    return 0;
}
  
// запись структуры в файл
int save(char * filename, struct person *p)
{
    FILE * fp;
    char *c;
    int size = sizeof(struct person); // количество записываемых байтов
  
    fp = fopen(filename, "wb"); //открываем файл для бинарной записи
    if (!fp)    // если не удалось открыть файл
    {
        printf("Error occured while opening file \n");
        return 1;
    }
    // устанавливаем указатель на начало структуры
    c = (char *)p;
    // посимвольно записываем в файл структуру
    for (int i = 0; i < size; i++)
    {
        putc(*c++, fp);
    }
    fclose(fp);
    
    printf("File is been written \n");
    return 0;
}
  
// загрузка из файла структуры
int load(char * filename)
{
    FILE * fp;
    char *c;
    int i; // для считывания одного символа
    // количество считываемых байтов
    int size = sizeof(struct person);
    // выделяем память для считываемой структуры
    struct person * ptr = malloc(size);
    fp = fopen(filename, "rb");     // открываем файл для бинарного чтения
    if (!fp)
    {
        printf("Error occured while opening file \n");
        return 1;
    }
  
    // устанавливаем указатель на начало блока выделенной памяти
    c = (char *)ptr;
    // считываем посимвольно из файла
    while ((i = getc(fp))!=EOF)
    {
        *c = i;
        c++;
    }
  
    fclose(fp);
    // вывод на консоль загруженной структуры
    printf("%-20s %5d \n", ptr->name, ptr->age);
    free(ptr);
    return 0;
}
*/

/*
#include <stdio.h>
 
int main() {
    int N  = 20;
    char str[N];   // определяем буфер достаточной длины
 
    FILE *fp = fopen("data.txt", "r");
    size_t count = fread(str, sizeof str[0], N, fp); 
    printf("read %zu elements out of %d\n", count,  N);
    printf(str);
    fclose(fp);
}
*/

/*
#include <stdio.h>
 
struct person
{
    char name[20];
    int age;
};

int main(void)
{
    char * filename = "users.dat";
    struct person people[] = { {"Tom", 23}, {"Alice", 27}, {"Bob", 31}, {"Kate", 29} };
    // количество записываемых структур
    int n = sizeof(people)/sizeof(people[0]);
    FILE *fp = fopen(filename, "w");
    if (!fp)
    {
        printf("Error occured while opening file\n");
        return 1;
    }
      
    for(int i=0; i < n; i++)
    {
        fprintf(fp, "%s  %d\n", people[i].name, people[i].age);
        printf("%s  %d\n", people[i].name, people[i].age);
    }
    fclose(fp);
    printf("File has been written\n");
    return 0;
}
*/

/*
#include <stdio.h>
 
int main(void)
{   
    char * filename = "users.dat";
    char name[20];  // для считывания имени
    int age;        // для считывания возраста
    FILE *fp = fopen(filename, "r");
    if (!fp)
    {
        printf("Error occured while opening file\n");
        return 1;
    }
     
    while((fscanf(fp, "%20s  %d\n", name, &age))!=EOF)
    {
        printf("%s  %d\n", name, age);
    }
    fclose(fp);
    return 0;
}
*/

#include <stdio.h>
 
int main(void)
{
    printf("1");
    getchar(); // ожидание ввода символа
    printf("2");
    getchar(); // ожидание ввода символа
    printf("3");
    int a;
    std::cin>>a;
    std::cout<<"Number is "<<a<<std::endl; 
    return 0;
}