#include<stdio.h>
#include<conio.h>

int findMinMax(int,int,int*,int*);

int main()
{
    int a,b,min,max;

    printf("Please enter first value: ");
    scanf("%d",&a);
    printf("Please enter second value: ");
    scanf("%d",&b);

    findMinMax(a, b, &min, &max);
    
    printf("The min value is: %d", min);
    printf("\nThe max value is: %d", max);

    return 0;

}

int findMinMax(int f_value, int s_value, int *pMin, int *pMax)
{
    if(f_value > s_value)
    {
        *pMin = s_value;
        *pMax = f_value;
    }
    else
    {
        *pMin = f_value;
        *pMax = s_value;
    }
}