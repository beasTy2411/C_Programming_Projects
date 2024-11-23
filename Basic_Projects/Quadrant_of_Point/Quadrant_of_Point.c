#include<stdio.h>
#include<conio.h>

void main()
{
    int x, y;

    printf("Input the point(x y): ");
    scanf("%d %d", &x,&y);
    printf("\n");

    if(x > 0)
    {
        if(y>0)
        {
            printf("The point lies in the Ist Quadrant.");
        }
        else
        {
            printf("The point lies in the IVth Quadrant.");
        }
    }
    else
    {
        if(y>0)
        {
            printf("The point lies in the IInd Quadrant.");
        }
        else
        {
            printf("The point lies in the IIIrd Quadrant.");
        }
    }

    printf("\nPress any key to continue...");

    getch();
}