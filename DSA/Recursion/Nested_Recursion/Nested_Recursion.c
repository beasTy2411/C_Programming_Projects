#include <stdio.h>

int fun (int n);

int fun(int n)
{
    if (n > 100)
    {
        printf("%i \n", n);
        return n-10;
    }
    else
    {   
        printf("%i \n", n);
        return fun(fun(n + 11));
    }
}

int main()
{
    int x = 95;
    printf("%i", fun(x)); 
}