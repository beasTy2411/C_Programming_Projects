#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("Number&Squares.txt","w");

    if(fp != NULL)
    {
        for(int i = 1; i <= 10; i++)
        {
            fprintf(fp,"Number: %i  Square: %i  Cube: %i\n", i, i*i, i*i*i);
        }
    }

    fclose(fp);
}  