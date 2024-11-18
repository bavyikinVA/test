/*function = 0,5 * x^3 + 3 
*/

#include"stdio.h"
#include<time.h>

double rectangle_method(double a, double step, int iterator)
{
	double x;
	double middle_rectangle_integral = 0;
	
    for (int i = 0.5; i < iterator; i++)
	{
		x = a + i * step;
		middle_rectangle_integral += 0.5 * x * x * x + 3;
	}
	middle_rectangle_integral *= step;

	return middle_rectangle_integral;


}

double trapezoid_method(double step, double a, double iterator)
    {   
        double trapezoidal_integral = 0;// the area under the function
        
        for(int i = 0; i < iterator; i++) 
        {
            const double x1 = a + i*step;
            const double x2 = a + (i+1)*step;
            trapezoidal_integral += 0.5*(x2-x1)*((0.5 * x2 * x2 * x2 + 3) + (0.5 * x1 * x1 * x1 + 3));
        }
        
        return trapezoidal_integral;
    }
    
double simpson_method(double step, double a, double b, double iterator)
{
    double x;
	double simpson_integral = (0.5 * a * a * a + 3) + (0.5 * b * b * b + 3);
	
	for (int i = 0; i < iterator; i++)
	{
	    int koef = 2 + 2 * (i % 2);
		x = a + i * step;
	    simpson_integral += koef * (0.5 * (x + step) * (x + step) * (x + step) + 3);
	}
	return simpson_integral * step / 3;
}
    
    
    
int main()
{
    
	int a, b; // right and left borders of x
	printf("Enter the left border of integration: ");
	scanf("%d", &a);
	printf("Enter the right border of integration: ");
	scanf("%d", &b);
	
	double step; // the step with which the x coordinate changes
	int iterator = 1000;
	double result;
    step = ((double)b - (double)a) / (double)iterator;

    clock_t start0 = clock();
    result = rectangle_method(a, step,iterator);
    clock_t end0 = clock();
    printf("\nMiddle_rectangle_integral[a,b] = %f", result);
	double timeSpent0 = (double)(end0 - start0) / CLOCKS_PER_SEC;
	printf("\nSeconds: %.16lf \n", timeSpent0);



    clock_t start1 = clock(); //start time
    result = trapezoid_method(step,a, iterator);
    clock_t end1 = clock(); //Function end time
    printf("\nTrapezoid_integral[a,b] = %f", result);
	double timeSpent1 = (double)(end1 - start1) / CLOCKS_PER_SEC;
	printf("\nSeconds: %.16lf \n", timeSpent1);



    clock_t start2 = clock(); //start time
    result = simpson_method(step,a, b, iterator);
    clock_t end2 = clock(); //Function end time
    printf("\nSimpson_integral[a,b] = %f", result);
	double timeSpent2 = (double)(end2 - start2) / CLOCKS_PER_SEC;

	printf("\nSeconds: %.16lf \n", timeSpent2);
	
}




