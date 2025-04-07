#include<stdio.h>

int main()
{
    int A[11] = {3,6,8,8,10,10,12,15,15,15,20};
    int size = 11;

    // using a seperate variable to store the duplicate value
    int lastDuplicate = 0;
    for(int i = 0; i < size; i++)
    {
        if(A[i] == A[i+1] && A[i]!=lastDuplicate)
        {
            printf("Duplicate element: %d\n", A[i]);
            lastDuplicate = A[i];
        }
    }

    //without using a seprate value
    for(int j = 0; j < size; j++)
    {
        if(A[j] == A[j+1])
        {
            if(A[j] == A[j+1] && A[j] == A[j-1])
                continue;
            
            printf("Duplicate element: %d\n", A[j]); 
        }
    }
}