#include<stdio.h>
#include<conio.h>

int rev_arr_func(int [], int*);

int main()
{
    int arr[3] = {10, 12, 1995}; 
    int copy_arr[3];

    rev_arr_func(arr, copy_arr);


    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", copy_arr[i]);
    }
    
}

int rev_arr_func(int Arr[3], int *Rev)
{
    for (int i = 0, j = 2; i < 3; i++, j--)
    {
        Rev[j] = Arr[i];
    }
    
}