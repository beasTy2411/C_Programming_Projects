#include<stdio.h>

void fun (int);

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
        fun(n-1);
        printf("%i, ", n);
    }
}