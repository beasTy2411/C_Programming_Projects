#include<stdio.h>
#include<conio.h>

void main()
{
    int rows, columns;

    printf("Please enter the no. of rows: ");
    scanf("%d",&rows);
    printf("\nPlease enter the no. of columns: ");
        scanf("%d",&columns);
    printf("\n");

    for(int i = 0; i< rows; i++)
    {
        for(int j = 0; j<columns ; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\nPress any key to continue...");

    getch();
}