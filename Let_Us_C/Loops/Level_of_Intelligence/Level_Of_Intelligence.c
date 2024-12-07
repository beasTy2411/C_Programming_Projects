#include<stdio.h>
#include<conio.h>

void main()
{
    int y = 1;
    float x = 0.5, i = 0.0;

    printf("i   y   x\n");

    for(y = 1; y <= 6; y++)
    {
        for ( x = 0.5; x <= 12.5; x+= 0.5)
        {
            i = 2 + (y + (0.5 * x)); 
            printf("%.2f  %d  %.2f\n", i, y, x);
        }
        
    }

    getchar();

}