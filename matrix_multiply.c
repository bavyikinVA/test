#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>

int main()
{
    const int size = 100;
    
    int** matrix_1 = (int**)malloc(size * sizeof(int*));

	for (int i = 0; i < size; i++)
	{
		matrix_1[i] = (int*)malloc(size * sizeof(int));
	}

	int** matrix_2 = (int**)malloc(size * sizeof(int*));

	for (int i = 0; i < size; i++)
	{
		matrix_2[i] = (int*)malloc(size * sizeof(int));
	}

	int** matrix_result = (int**)malloc(size * sizeof(int*));

	for (int i = 0; i < size; i++)
	{
		matrix_result[i] = (int*)malloc(size * sizeof(int));
	}
 
    clock_t start_time = clock(); //start time
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
        matrix_1[i][j] = rand() % 20; //random numers from 0 to 20
        matrix_2[i][j] = rand() % 20; //random numers from 0 to 20
        matrix_result[i][j] = 0;
        }
    }

    printf("Matrix 1\n");
    for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d", matrix_1[i][j]);
		    printf(" ");
			
		}
		printf("\n");
	}

    printf("Matrix 2\n");
    for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d", matrix_2[i][j]);
		    printf(" ");
			
		}
		printf("\n");
	}

    printf("Result matrix (A*B)\n");
    
    int i;
	int j;
	int k;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
		    for (k = 0; k < size; k++)
			{
				matrix_result[i][j] += matrix_1[i][k] * matrix_2[k][j];
			}
			printf("%d", matrix_result[i][j]);
		    printf(" ");
			
		}
		printf("\n");
	}
    
    clock_t end_time = clock(); //Function end time
    
    double timeSpent = (double)(end_time - start_time)/ CLOCKS_PER_SEC;

	printf("\nTime: %.16lf \n", timeSpent);
	
	//freeing up memory

	for (int i = 0; i < size; i++)
	{
		free(matrix_1[i]);
	}
	free(matrix_1);

	for (int i = 0; i < size; i++)
	{
		free(matrix_2[i]);
	}
	free(matrix_2);

	for (int i = 0; i < size; i++)
	{
		free(matrix_result[i]);
	}
	free(matrix_result);
	
    return 0;
}