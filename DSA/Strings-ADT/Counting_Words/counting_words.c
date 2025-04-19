#include<stdio.h>

void count_words(char *); //function prototype
void count_words_exception( char *ch); //function prototype for execption

void count_words(char *ch) //default function for counting words
{
    int words = 0, length = 0;

    while (ch[length] != '\0') //finding out the length of the string
    {
        length++;
    }

    for(int i = 0; i < length; i++) //looping through the string and count the spaces
    {
        if(ch[i] == ' ') //checking if the character is a space
        {
            words ++; // if true, incrementing the word variable 
        }
    } 
    words++;
    printf("The total numbers of words according to default function are: %i\n", words);   
}

void count_words_exception(char *ch) // function for counting words deals with whitespace exception
{
    int words = 0, length = 0;

    while (ch[length] != '\0') //finding out the length of the string
    {
        length++;
    }

    for(int i = 0; i < length; i++) //looping through the string and count the spaces
    {
        if(ch[i] == ' ' && ch[i-1] !=' ') //checking if the current character is a space and if the previous charactes is not a space
        {
            words ++; //if true, increment the variable
        }
    } 
    words++; // incrementing the variable once as the number of spaces in a sentence is always total words - 1;
    printf("The total numbers of words accoding to the exception function are: %i\n\n", words);   
}


int main()
{
    char sen[50];
    printf("\nEnter the input: ");
    scanf("%[^\n]s", sen); // taking input till the stdin finds the newline character
    count_words(sen);
    count_words_exception(sen);

    return 0;
}