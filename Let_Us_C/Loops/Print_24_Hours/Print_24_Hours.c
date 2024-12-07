#include<stdio.h>
#include<conio.h>

void main()
{
    int i = 1;

    for(;i<=12; i++)
    {
        if (i!=12)
        {
            printf("It is %d AM now.\n", i);
        }
        else
        {
            printf("It is %d PM at Noon.\n", i);
        }
        
    }

    for(i=1; i<=12; i++)
    {
        if (i!=12)
        {
            printf("It is %d PM now.\n", i);
        }
        else
        {
            printf("It is %d AM at Midnight.\n", i);
        }
    }

    getchar();

}