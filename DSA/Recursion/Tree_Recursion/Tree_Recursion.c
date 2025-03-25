#include<stdio.h>

void fun(int);

int main()
{
    int x = 3;
    fun(x);
    return 0;
}

void fun(int n)
{   
    if (n > 0)
    {
        printf("%i, ", n);
        fun(n-1);
        fun(n-1);
    }
}