#include <stdio.h>
#include <locale.h> 

void reverseArray(int arr[], int N) 
{
    int start = 0;
    int end = N - 1;
    while (start < end) 
    {
        // Меняем местами элементы
        int temp = arr[start]; // вспомогательная переменная temp, которая хранит элемент массива слева 
        arr[start] = arr[end];
        arr[end] = temp;
        // Сдвигаем указатели
        start++;
        end--;
    }
}

int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    const int N;

    // Ввод размера массива
    printf("Введите размер массива: ");
    scanf("%d", &N);

    // Проверка на корректность размера массива
    if (N <= 0) 
    {
        printf("Размер массива должен быть больше 0.\n");
        return 1;
    }

    int arr[N]; // инициализация массива

    // Ввод элементов массива
    printf("Введите элементы массива:\n");
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, N); // вызов функции, которая меняет порядок элементов массива на обратный

    // Вывод измененного массива
    printf("Массив в обратном порядке:\n");
    for (int i = 0; i < N; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
