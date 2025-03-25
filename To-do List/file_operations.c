#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("myFile.txt", "r");

    int count = 0;
    char ch;

    if(fp !=NULL)
    {
        while((ch = fgetc(fp)) != EOF)
        {
            if(ch == '\n')
            {
                count++;
            }
        }
        count++;
        printf("Total No. of lines are: %i", count);
    }
    return 0;
}