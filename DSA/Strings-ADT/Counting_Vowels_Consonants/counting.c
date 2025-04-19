#include<stdio.h>

void counting(char *); // function prototype 

void counting(char *ch)
{
    int v_count = 0, c_count = 0; // variable to count vowels and consonants respectively
    int length = 0; // variable to store the length of the string
    
    while(ch[length] != '\0') // finding the length of the string
    {
        length++;
    }

    for( int i = 0; i < length; i++)
    {
        if(ch[i] == 'a'|| ch[i] == 'e' ||ch[i] == 'o' || ch[i] == 'i' || ch[i] == 'u'
            || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U') //checking if the character is a vowel, both in lower case and upper case
            {
                v_count++; //if true, inreasing the count of the variable
            }
        else if(ch[i] == ' '){} //skipping or ignoring the spaces
        else
        {
            c_count++; // if false, incrementign the count of consonant variable
        }
    }

    printf("The total number of vowels in the sentence is: %i", v_count);
    printf("\nThe total number of consonants in the sentence is: %i\n", c_count);
}

int main()
{
    char sen[50];
    printf("Enter the input: ");
    scanf("%[^\n]s",&sen);
    counting(sen);
    
    return 0;
}
