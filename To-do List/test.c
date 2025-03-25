#include<stdio.h>
#define SIZE 8

int main()
{
    char arr[SIZE] = {'a','b','c','d','e','f','g','b'};
    int countArr[21] = {0};
    int i, maxIndex;

    for(i = 0; i < SIZE; i++)
    {
        countArr[arr[i] - 83]++;
    }

    maxIndex = 0;
    for ( i = 0; i < 21; i++)
    {
        if(countArr[i] > countArr[maxIndex])
        maxIndex = i ; 
    }

    printf("The value is: %c\n", maxIndex + 83);
    printf("Total no. of appreances: %i\n",countArr[maxIndex]);
    
    return 0;
}