#include <stdio.h>
int stringlength(char *);

int main() {
    
    char str[]={"Fannymagnet"};
    int strlen = 0;
    
    strlen = stringlength(str);
    
    printf("Length of the string is: %d", strlen);

    return 0;
}

int stringlength(char *string)
{
    int count = 0;
    
    while(*string != '\0')
    {
        count++;
        string++;
    }
    
    return count;
}