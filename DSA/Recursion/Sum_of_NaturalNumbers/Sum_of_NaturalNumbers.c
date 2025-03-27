#include <stdio.h>

//fucntion which uses the formula to directly calucate the sum of 'n' natural numbers
int sum_using_formula(int n)
{
    return (n*(n+1))/2;
}

//function which uses loops to calcutate the sum
int sum_using_loops(int n)
{
    int i, sum = 0;
    for(i = 1; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}

// function which uses recursion to calculate the sum 
int sum_using_recursion(int n)
{
    if(n == 0)
        return 0;
    else
        return sum_using_recursion(n - 1) + n;
}

int main()
{
    int num = 0;

    printf("Please input a number: ");
    scanf("%i", &num);

    printf("Sum of n natural numbers using the formula: %i\n", sum_using_formula(num));
    
    printf("Sum of n natural numbers using the loop: %i\n", sum_using_loops(num));
    
    printf("Sum of n natural numbers using the recursion: %i\n", sum_using_recursion(num));
    
}