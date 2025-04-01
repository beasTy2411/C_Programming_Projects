//This code is using Horner's Rule to calculate the result for the Taylor Series
#include <stdio.h>

int taylor_series_loops(int x, int n);
int taylor_series_recursion(int x, int n);

// calculating the result using loops
int taylor_series_loops(int x, int n)
{
    int result = 1;
    for( ;n > 0; n--)
    {
        result = 1 + result * x/n;
    }

    return result;
}

//calculating the result using recursion
int taylor_series_recursion(int x, int n)
{
    static double result = 1;

    if(n == 0)
        return result;
    
    result = 1 + x/n * result;
    return taylor_series_recursion(x , n - 1);
    
}

int main()
{
    int number, power = 0;

    printf("Please enter the number: ");
    scanf("%i", &number);
    printf("Please enter the power: ");
    scanf("%i", &power);

    printf("The result of the Taylor Series using loops is: %i\n", taylor_series_loops(number, power));
    printf("The result of the Taylor Series using recursion is: %i", taylor_series_recursion(number, power));
    return 0;
}