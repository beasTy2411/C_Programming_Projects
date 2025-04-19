#include<stdio.h>

int main()
{
    char String[] = {"This  is the string operations unit."};
    int length = 0;
    int i = 0;
    while(String[i] != '\0' )
    {
        i++;
    }
     length = i;

    printf("The length of the string is %d.", length);
}