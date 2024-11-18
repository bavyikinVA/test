/*
#include <stdio.h>
 
struct person
{
    int age;
    char * name;
    char * tel;
};
 
int main(void)
{
    struct person vlad = {20, "Vlad", "89525556644"};
    printf("Age: %d \t Name: %s \t tel: %s", vlad.age, vlad.name, vlad.tel);
    return 0;
}
*/

/*
#include <stdio.h>
 
struct company
{
    char name[20];
    char country[20];
};

struct phone
{
    char title[20];
    int price;
    struct company manufacturer;
};
 
int main(void)
{
    struct phone myphone;
    printf("Enter title: ");
    scanf("%20[^\n]", myphone.title);
    printf("Enter price: ");
    scanf("%d", &myphone.price);
    printf("Enter manufacturer: ");
    scanf("%20s", myphone.manufacturer.name);
    printf("Enter country: ");
    scanf("%20s", myphone.manufacturer.country);
     
    printf("\nPhone: %s \n", myphone.title);
    printf("Price: %d \n", myphone.price);
    printf("Manufacturer: %s (%s) \n", myphone.manufacturer.name, myphone.manufacturer.country);
    return 0;
}
*/

#include <stdio.h>
 
struct person 
{
    int age;
    char name[20];
};
 
int main(void)
{
    struct person people[] = { {23, "Tom"}, {32, "Bob"}, {26, "Alice"}, {41, "Sam"}};
     
    int n = sizeof(people)/sizeof(people[0]);
     
    for(struct person *p=people; p < people+n; p++)
    {
        printf("Name:%s \t Age: %d \n", p->name, p->age);
    }
    return 0;
}