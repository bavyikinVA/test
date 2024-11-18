#include <stdio.h>
#include <locale.h>

// Функция для преобразования числа в текстовое представление
void numberToText(int number) 
{
    if (number < 0 || number > 99) 
    {
        printf("Число должно быть в диапазоне от 0 до 99.\n");
        return; // заканчивается выполнение функции 
    }
    
    char* units[] = {"", "одно", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять"};
    char* teens[] = {"десять", "одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать"};
    char* tens[] = {"", "", "двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "семьдесят", "восемьдесят", "девяносто"};

    int tensDigit = number / 10; // количество десятков (массив tens) числа number 
    int unitsDigit = number % 10; // количество единиц (массив units) числа number

    if (number == 0) 
        {
            printf("ноль домашних заданий\n");
        } 
    else if (number >= 10 && number <= 19) 
        {
            printf("%s домашних заданий\n", teens[number - 10]);
        } 
        else 
        {
            if (tensDigit > 0) 
            {
                printf("%s ", tens[tensDigit]);
            }
            
            if (unitsDigit > 0) 
            {
                printf("%s ", units[unitsDigit]);
            }
            
            if (unitsDigit == 1 && tensDigit != 1) 
            {
                printf("домашнее задание\n");
            } else if (unitsDigit >= 2 && unitsDigit <= 4 && tensDigit != 1) 
            {
                printf("домашних задания\n");
            } else {
                printf("домашних заданий\n");
            }
        }
}

int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int number;
    printf("Введите количество домашних заданий: ");
    scanf("%d", &number); // оператор ввода в консоль

    numberToText(number); // вызов функции 

    return 0;
}
