#include<stdio.h>

#define MAX_LENGTH 50

int compare_case(char *, char *, int); //function prototype of the function relevant to cases
int compare_ir_case(char *, char *, int); //function prototype of the function irrelevant of the cases

int compare_case(char * string_1, char *string_2, int length)
{
    int false_case = 0; // variable to keep a track if the character are not matching

    for( int i = 0; i< length ; i++) //looping through the array
    {
        if(string_1[i] != string_2[i]) // checking if the characters in the strings at the same index are not matching
        {
            false_case = 1; //if true, chaning the value of the false case as true and breaking out of the loop
            break;
        }
    }

    if(false_case == 1) //if false case is 1, the strings are different.
    {
        printf("The strings are not same.");
    }
    else
    {
        printf("The strings are same.");
    }

}

int compare_ir_case(char * string_1, char *string_2, int length)
{
    int false_case = 0; // variable to keep a track if the character are not matching

    for(int j = 0; j < length; j++) //looping through the string and changing the case to all lower for first string
    {
        if(string_1[j] >= 65 && string_1[j] <= 90)
        {
            string_1[j] = string_1[j] + 32;
        }
    }
    for(int j = 0; j < length; j++) //looping through the string and changing the case to all lower for second string
    {
        if(string_2[j] >= 65 && string_2[j] <= 90)
        {
            string_2[j] = string_2[j] + 32;
        }
    }

    for( int i = 0; i< length ; i++) //looping through the string for comparison
    {
        if(string_1[i] != string_2[i])  //checking if the characters in both strings at same index are not matching
        {
            false_case = 1; // changing the value of false variable as one when the compared characters are different and breaking out of the loop
            break;
        }
    }

    if(false_case == 1) //if false case is 1, the strings are different.
    {
        printf("The strings are not same.");
    }
    else
    {
        printf("The strings are same.");
    }

}

int main()
{
    char string_1[MAX_LENGTH], string_2[MAX_LENGTH];  //declaring 2 string variable to hold out input
    int choice, length_1 = 0, length_2 = 0; // a choice variable for switch case, and 2 length variables to hold the length of the input strings

    printf("Please enter the first string:");
    scanf("%s", string_1);  // taking input for first string
    printf("Please enter the second string:");
    scanf("%s", string_2);  //taking input for second string

    while(string_1[length_1] != '\0')   //finding the length of first string
    {
        length_1++;
    }
    while(string_2[length_2] != '\0')   //finding the length of second string
    {
        length_2++;
    }

    if(length_1 != length_2)    //checking if the length of the string is same
    {
        printf("The length of the string are not same. Hence, the strings are not same.");  //print and terminate the code if the length of the strings are different
        return 1;
    }

    printf("Choose an option\n");
    printf("1. Compare with relevant of the cases\n");
    printf("2. Compare irrelevant of the cases\n");
    printf("Please enter your choice: ");
    scanf("%i", &choice);   //taking the input for choice

    switch(choice)
    {
        case 1: compare_case(string_1, string_2, length_1);
                break;
        case 2: compare_ir_case(string_1, string_2, length_1);
                break;
        default: break;
    }

    return 0;
}