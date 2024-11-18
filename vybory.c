#include <stdio.h>
#include <locale.h> 

// Функция для определения дня недели по дате
int dayOfWeek(int d, int m, int y) 
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}

// Функция для определения даты выборов
void electionDay(int year) {
    // Найдем день недели для 1 ноября
    int day = dayOfWeek(1, 11, year);

    // Найдем первый понедельник ноября
    int firstMonday = 1;
    while (day != 1) { // 1 - понедельник
        firstMonday++;
        day = (day + 1) % 7;
    }

    // Найдем первый вторник после первого понедельника
    int electionDay = firstMonday + 1;

    printf("Выборы будут %d ноября %d года\n", electionDay, year);
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int year;
    printf("Введите год: ");
    scanf("%d", &year);
    electionDay(year);
    return 0;
}
