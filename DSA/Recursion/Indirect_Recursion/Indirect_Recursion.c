#include<stdio.h>

void funA(int n);
void funB(int n);

void funA(int n)
{
    if(n > 0)
    {
        printf("%i, ", n);
        funB(n-1);
    }
}

void funB(int n)
{
    if(n > 1)
    {
        printf("%d, ", n);
        funA(n/2);
    }
}


int main()
{
    int x = 20;
    funA(x);
}
