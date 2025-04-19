#include<stdio.h>

int main()
{
    char string[]={"This CanNoT Be TrUe"};
    int i = 0;

    while ((string[i] != '\0'))
    {
        if(string[i] >= 65 && string[i]<=90) //checking if the character is uppercase
        {
            string[i] = string[i] + 32; //adding the difference between lower case 'a' and upper case 'A'
        }    
        else if(string[i] >= 97 && string[i]<=122) //checking if the character is lowercase
        {
            string[i] = string[i] - 32; //substracting the difference between lower case 'a' and upper case 'A'
        }
        i++;
    }
    
    printf("This is the converted string: %s.", string);
}