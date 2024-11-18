#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
// Функция для вывода матрицы
void printMatrix(int **matrix, int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Функция для вывода части матрицы выше побочной диагонали
void printUpperAntiDiagonal(int **matrix, int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i + j < N - 1)
            {
                printf("%d ", matrix[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

// Функция для нахождения максимального элемента выше побочной диагонали
int findMaxAboveAntiDiagonal(int **matrix, int N)
{
    int max = matrix[0][0];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i + j < N - 1 && matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }
    return max;
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int N;

    // Ввод размера матрицы
    printf("Введите размер матрицы (N): ");
    scanf("%d", &N);

    // Проверка на корректность размера матрицы
    if (N <= 0 || N > 10)
    {
        printf("Размер матрицы должен быть больше 0 и не превышать 10.\n");
        return 1;
    }

    // Динамическое выделение памяти для матрицы
    int **matrix = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++)
    {
        matrix[i] = (int *)malloc(N * sizeof(int));
    }

    // Ввод элементов матрицы
    printf("Введите элементы матрицы:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Вывод исходной матрицы
    printf("Исходная матрица:\n");
    printMatrix(matrix, N);

    // Вывод части матрицы выше побочной диагонали
    printf("Часть матрицы выше побочной диагонали:\n");
    printUpperAntiDiagonal(matrix, N);

    // Нахождение максимального элемента выше побочной диагонали
    int maxElement = findMaxAboveAntiDiagonal(matrix, N);
    printf("Максимальный элемент выше побочной диагонали: %d\n", maxElement);

    // Освобождение памяти
    for (int i = 0; i < N; i++)
    {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
