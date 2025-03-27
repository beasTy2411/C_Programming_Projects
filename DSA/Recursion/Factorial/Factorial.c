#include <stdio.h>

//function which uses loops to calcutate the factorial
int factorial_using_loops(int n)
{
    int i, fact = 1;
    for(i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

// function which uses recursion to calculate the factorial
int factorial_using_recursion(int n)
{
    if(n == 0)
        return 1;
    else
        return factorial_using_recursion(n - 1) * n;
}

int main()
{
    int num = 0;

    printf("Please input a number: ");
    scanf("%i", &num);

    printf("Factorial of %i using the loop: %i\n", num, factorial_using_loops(num));
    
    printf("Factorial of %i using the recursion: %i\n", num, factorial_using_recursion(num));
    
}