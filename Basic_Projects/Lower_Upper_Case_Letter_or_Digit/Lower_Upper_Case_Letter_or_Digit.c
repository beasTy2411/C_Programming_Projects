#include<stdio.h>
#include<conio.h>

int main()
{
    char myCharacter;
    printf("Please enter the character: ");
    scanf("%c", &myCharacter);

    if ( myCharacter >= 65 && myCharacter <=90)
    {
        printf("The character is upper case.\n");
    }
    else if(myCharacter >= 97 && myCharacter <= 122)
    {
        printf("The character is lower case.\n");
    }
    else if (myCharacter >= 48 && myCharacter <= 57)
    {
        printf("The character is a number.\n");
    }
    else
    {
        printf("Other character.\n");
    }

    getch();
    
    
}