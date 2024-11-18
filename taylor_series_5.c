/*******************************************************************************
Task:
Decompose the sin(x) function into a Taylor series.
sin(x) = x - x^3/3! + x^5/5! - x^7/7! +....

The program calculates the formula for the argument x.
The program decomposes into 1,000,000 terms for 1 argument
and outputs the EXACT VALUE of the function of this argument,
the SUM OF THE SERIES and the ABSOLUTE DIFFERENCE between the table value
and the resulting sum of the series.
All this is done for several variables, in an external loop of for - n (iter value) interations (i.e. arguments)

fabs(sin(x) - result) - absolute difference

*******************************************************************************/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    //разложение в ряд тейлора y=sinx
        double x;
        double factorial = 1.0;
        const int iter = 100; // iter - кол-во итераций в цикле - функция sinx будет рассчитываться для (iter) аргументов
        printf("Enter x from [-30;30]: "); //потому что при значениях х, больших 30-40, слагаемые ряда имеют очень большие значения
        scanf("%lf", &x);
        printf("\n");
        if (abs(x) <= 30)  {
            
            clock_t start = clock(); //timer start
            
            for (int j = 0; j < iter; j++)
            {
            double sum = x;
            double result = 0;
                for(int i = 1; i < 1000001; i += 2) 
                {
                    //    (/=i) and (/=(i+1)) - factorial implementation
                    sum /= i; 
                    result += sum;
                    sum = -1 * sum * x * x / (i+1); //adder variable
                }  
                if ((j < 3) || (j > (iter-4))) //output information about the first (and last) 3 functions
                {
                    printf("Точное значение функции №%d", j+1);
                    printf("    ");
                    printf("%lf\n", sin(x));
                    printf("Сумма ряда №%d", j+1);
                    printf("    ");
                    printf("%lf\n", result);
                    printf("Абсолютная разность %d", j+1 );
                    printf("    ");
                    printf("%lf\n", fabs(sin(x) - result));   
                }
                
                x+=0.001;
                sum = 0;
            }
            
            clock_t end = clock(); //timer end
           
            double timeprogram = (double)(end - start) / CLOCKS_PER_SEC; // time working of the program
            
            printf("\nTime: %lf \n", timeprogram);
        }
        else 
        {
            printf("Введено неправильное значение х, запустите программу заново!");    
            exit(0);
            
        }
    return 0;
}
