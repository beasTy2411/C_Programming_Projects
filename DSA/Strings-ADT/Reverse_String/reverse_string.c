#include<stdio.h>
#include<stdlib.h>

#define MAX_LENGTH 50

void reverse_string(char *); //function prototype for function using seperate array variable
void reverse_string_pointer(char *); //function prototype for function using 2 pointers

// this method store the reverse of the original array in a seperate array
void reverse_string(char *ch)
{
    int length = 0;
    while(ch[length] != '\0') // finding the length of the string
    {
        length++;
    }

    char *new_ch = (char *)malloc(length * sizeof(char)); // dynamically creating a new array of the length of the original string;

    for(int i = 0, j = length - 1; i < length; i++, j--) //looping through the string, forward in the new array, backwards in the original array
    {
        new_ch[i] = ch[j]; // storing the characters one by one
    }

    printf("\nThe original string is: %s\n", ch); // printing the original array to the screen
    printf("The reversed string is: %s", new_ch); // printing the new reversed array to the screen
}

// this method works on the original array and modifies it
void reverse_string_pointer(char *ch)
{
    int length = 0;
    char temp; // temporary variable to store the character
    while(ch[length] != '\0') // finding the length of the string
    {
        length++;
    }

    for(int i = 0, j = length - 1; i < j; i++, j--) // looping through the string, one pointer from the start, another from the end
    {
        temp = ch[i]; //storing the character in the temporary variable
        ch[i] = ch[j]; // switching the characters
        ch[j] = temp; // storing the temporary stored variable back to the array
    }

    printf("The reversed string is: %s", ch); // printing the string
}


int main()
{
    char sen[MAX_LENGTH];
    int choice;
    printf("Enter the input string: ");
    scanf("%s", sen);

    // menu driven functions
    printf("\nChoose an option\n");
    printf("1. Reverse the string using seperate array.\n");
    printf("2. Reverse the string using 2 pointers.\n");
    printf("Please enter a choice: ");
    scanf("%i", &choice);
    
    switch (choice)
    {
        case 1: reverse_string(sen);
                break;
        case 2: reverse_string_pointer(sen);
                break;
        default:
                break;
    }

    return 0;
}