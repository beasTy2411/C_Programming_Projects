#include<stdio.h>

#define MAX_LENGTH 50

void validate(char *ch);

void validate(char *ch)
{
    int length = 0, true_val = 0;
    while(ch[length] != '\0')
    {
        length++;
    }

    for(int i = 0; i < length; i++)
    {
        if(!((ch[i] >= 65 && ch[i] <= 90) || (ch[i] >= 97 && ch[i] <= 122) || (ch[i] >= 48 && ch[i] <= 57) || ch[i] == ' ' || ch[i] == '.'))
        {
            true_val = 1;
            break;
        }

    }
    if(true_val == 0)
    {
        printf("This string is valid.");
    }
    else
    {
        printf("This string is not valid.");
    }

}

int main()
{
    char sen[MAX_LENGTH];
    printf("Enter the input: ");
    scanf("%[^\n]s", sen);
    validate(sen);

    return 0;

}