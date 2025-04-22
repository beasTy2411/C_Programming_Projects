#include<stdio.h>

#define MAX_LENGTH 50

void convert_lower_case(char *);    //function prototype for converting all to lowercase
void duplicate_compare_string_case_sensitive(char *);   //function prototype for case sensitive function
void duplicate_compare_string_case_insensitive(char *);     //function prototype for case insensitive function
void duplicate_compare_string_hash_table(char *);   // function prototype for function using hash table
void duplicate_compare_string_bitwise(char *);  // function prototype for function using bitwise operations

void convert_lower_case(char *string)   //converts all the characters to lowercase
{
    int i = 0, j = 0;
    
    while(string[i] != '\0')
    {
        if(string[i] >= 65 && string[i] <= 90)
        {
            string[i] = string[i] + 32;
        }
        i++;
    }
}

void duplicate_compare_string_case_sensitive(char *string)  // this method is case sensitive and checks for upper and lower case seperately
{
    int i = 0, j = 0, count = 1;
    for(i = 0; string[i] != '\0'; i++)  //loops through the string
    {   
        count = 1;
        if(string[i] == '0' || string[i] == ' ') continue;  //if the character at index is either 0 or space, skip it and continue to next iteration
        else
        {
            for( j = i + 1; string[j] != '\0'; j++) //loops through the string from the next index of i 
            {
                if(string[j] == '0' || string[j] == ' ')    //if the character is 0 or space, skip and continue to the next iteration
                {
                    continue;
                }
                else if(string[i] == string[j]) //checks if the characters are same
                {
                    count++;    //increment the counter
                    string[j] = '0';    //replace the value with 0  at the index
                }
            }
        
            printf("The character %c is present %i times in the string.\n", string[i], count);  //prints the character and its count
        }
    }
}

void duplicate_compare_string_case_insensitive(char *string)    // this method is case insensitive and checks for upper and lower case together
{
    int i = 0, j = 0, count = 1;
    
    convert_lower_case(string); //uses the function to convert the string in lower case

    for(i = 0; string[i] != '\0'; i++)  //loops through the string
    {   
        count = 1;  //duplicate counter
        if(string[i] == '0' || string[i] == ' ') continue;  //if the character at index is either 0 or space, skip it and continue to next iteration
        else
        {
            for( j = i + 1; string[j] != '\0'; j++) //loops through the string from the next index of i 
            {
                if(string[j] == '0' || string[j] == ' ')    //if the character is 0 or space, skip and continue to the next iteration
                {
                    continue;
                }
                else if((string[i]) == (string[j])) //checks if the characters are same
                {
                    count++;    //increment the counter
                    string[j] = '0';    //replace the value with 0  at the index
                }
            }
        
            printf("The character %c is present %i times in the string.\n", (string[i]), count);    //prints the character and its count
        }
    }
}

void duplicate_compare_string_hash_table(char *string)  // this method uses hash table to keep a count of occuring character in the string
{
    int i = 0, j = 0;
    
    convert_lower_case(string); //uses function to convert the string to lower case

    char hash[26] = {0}; //create a seperate array to store the count of the occuring characters

    for(i = 0; string[i] != '\0'; i++ ) //loops through the string
    {
        hash[string[i] - 97] += 1;  //the index is calculated by substracting 97(a) from the decimal value of the character in index i and the counter is incremented
    }

    for(i = 0; i < 26; i++) //loop through the counter array
    {
        if(hash[i] > 0) //checks if the counter value is more than 0
        {
            printf("The character %c is present %i times in the string.\n", (i+97), hash[i]);   //prints the character and the counter value
        }
    }
}

void duplicate_compare_string_bitwise(char *string)
{
    convert_lower_case(string); //uses the function to convert the string to lowercase

    int hash = 0, bit = 0; //variables to store and do operations on bits

    for(int i = 0; string[i] != '\0'; i++)
    {
        bit = 1;    //set value to 1
        bit = bit<<(string[i] - 97); //shift the bit by (decimal value of character - decimal value of a(97))

        if((bit&hash) > 0)  //check for the if the current character is a duplicate by bit masking method
        {
            printf("The character %c is duplicate.\n", string[i]);  //if true, print the duplicate message
        }
        else
        {
            hash = bit|hash;    //using the bit mergin method to store the value
        }
    }
}

int main()
{
    char string[MAX_LENGTH];    //create a character array fo max_length
    int choice = 0;

    printf("Please enter the string: ");
    gets(string);   //asking for string input
    
    //menu to choose from multiple choice
    printf("Choose an option\n");
    printf("1. Check for duplicate character using case sensitive function\n");
    printf("2. Check for duplicate character using case insensitive function\n");
    printf("3. Check for duplicate character using hash table\n");
    printf("4. Check for duplicate character using bitwise operations\n");
    printf("Please enter your choice:");
    scanf("%i",&choice);
    
    switch (choice)
    {
    case 1: duplicate_compare_string_case_sensitive(string);
        break;
    case 2: duplicate_compare_string_case_insensitive(string);
        break;
    case 3: duplicate_compare_string_hash_table(string);
        break;
    case 4: duplicate_compare_string_bitwise(string);
        break;
    
    default:
        break;
    }

    return 0;
}