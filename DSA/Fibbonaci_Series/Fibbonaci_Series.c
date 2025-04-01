#include <stdio.h>

int F[10];
// calculation using loops
int fib_loops(int n)
{
    int i, sum, term0 = 0, term1 = 1;

    if (n <= 1)
        return n;

    printf("%i, %i, ", term0, term1);
    for(i = 2; i < n; i++)
    {
        sum = term0 + term1;
        term0 = term1;
        term1 = sum;
        printf("%i, ", sum);
    }
}

//calculation using recursion and memoization
int fib_recursion(int n)
{
    if(n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if(F[n-2] == -1)
        {
            F[n-1] = fib_recursion(n-2);
        }
        if(F[n-1] == -1)
        {
            F[n-1] = fib_recursion(n-1);
        }
        return F[n-2] + F[n-1];
    }
}


int main()
{
    int num = 0;

    for(int i = 0; i < 10; i++)
        F[i] = -1;

    printf("Enter the term till you want to print: ");
    scanf("%d", &num);
    fib_loops(num);
    printf("%i", fib_recursion(num));
}