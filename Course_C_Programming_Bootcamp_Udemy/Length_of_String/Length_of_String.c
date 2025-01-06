#include<stdio.h>
#include<conio.h>
int main()
{
    char str[50];
    char* p = str;
    int count = 0;

    printf("Please enter the string: ");
    fgets(str,50,stdin);

    while (*p != '\0')
    {
        count++;
        p++;
    }

    printf("The length of the String is: %d", count);
    getch();
    
}