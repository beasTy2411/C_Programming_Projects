#include<stdio.h>

int combination(int n, int r)
{
    if(r==0 || n==r)
        return 1;
    
        return combination(n-1, r-1) + combination(n-1, r);
}

int main()
{
    int n, r = 0;

    printf("Please enter the value of n and r: ");
    scanf("%i %i", &n, &r);
    printf("The output of the Combination Formula according to the value provided is: %i", combination(n,r));
    return 0;
}