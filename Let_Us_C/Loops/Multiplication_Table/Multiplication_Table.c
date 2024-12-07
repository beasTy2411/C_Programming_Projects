#include<stdio.h>
#include<conio.h>

void main()
{
    int num = 0;

    printf("Please enter the number you want to print multiplication table for: ");
    scanf("%d",&num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", num, i, num*i);
    }

    getch();
}