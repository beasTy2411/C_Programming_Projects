#include <stdio.h>
char* stringcopy(char *, char *);

int main() {
    
    char str[]={"Fannymagnet"};
    char str2[15];
    
    printf("The first string is: %s", str);
    printf("\nThe second string is: %s", stringcopy(str,str2));

    return 0;
}

char* stringcopy(char *string, char *string2)
{   int i = 0;
    while(string[i] != '\0')
    {
        string2[i] = string[i];
        i++;
    }
   return string2; 
}