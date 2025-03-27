#include <stdio.h>

int exponent_recursion(int,int);
int exponent_loops(int,int);
int exponent_reduced_recursion(int,int);

// functionality using a recursive function
int exponent_recursion(int power, int number)
{
    if(power == 0)
        return 1;
    else
        return exponent_recursion(power-1,number) * number;
}

// functionality using loops
int exponent_loops(int power, int number)
{   
    int result = 1;
    for(int i = 1; i <= power; i++)
    {
        result = result * number;
    }

    return result;
}

//functionality using reduce recursion method
int exponent_reduced_recursion(int number, int power)
{
    if(power == 0)
        return 1;

    if(power % 2 == 0)
        return exponent_reduced_recursion(number * number, power/2);
    else
        return exponent_reduced_recursion(number * number, (power-1)/2) * number;
}

void main()
{
    int num, pow = 0;

    printf("Please input a number: "); 
    scanf("%i", &num);
    printf("Please input the power: ");
    scanf("%i", &pow);

    printf("The answer using recursion is: %i\n", exponent_recursion(pow,num));
    printf("The answer using loops is: %i\n", exponent_loops(pow,num));
    printf("The answer using reduced recursion is: %i\n", exponent_reduced_recursion(num,pow));
}

