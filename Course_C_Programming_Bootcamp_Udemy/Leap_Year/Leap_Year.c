#include<stdio.h>
#include<conio.h>

void main()
{
    int year;

    printf("Please enter the year: ");
    scanf("%d", &year);

    if( year % 4 == 0 && (year % 100 != 0 || year % 400 ==0) )
    {
        printf("The entered year is a leap year.");
    }
    else
    {
        printf("The entered year is not a leap year.");
    }
    
    printf("\nPress any key to continue...");

    getch();
}