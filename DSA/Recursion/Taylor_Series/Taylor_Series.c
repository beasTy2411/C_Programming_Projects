#include <stdio.h>

int taylor_series(int,int);

//function using recursion to calculate the result
int taylor_series(int x, int n)
{
    static int power = 1, factorial = 1;
    int result;

    if (n == 0)
        return 1;
    else
    {
        result = taylor_series(x, n - 1);
        power = power * x;
        factorial = factorial * n;
        return (result + power/factorial);
    }
}

int main()
{
    int number, power = 0;

    printf("Please enter the number: ");
    scanf("%i", &number);
    printf("Please enter the power: ");
    scanf("%i", &power);

    printf("The result of the Taylor Series is: %i", taylor_series(number, power));
    return 0;
}