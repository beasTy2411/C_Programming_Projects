#include<stdio.h>

typedef struct Arr
{
    int A[10];
    int length;
}Arr;

void display(Arr *array)
{   
    printf("The array is : ");
    for (int i = 0; i < array->length; i++)
    {
        printf("%i ", array->A[i]);
    }
    printf("\n");
}

int check(Arr *array)
{
    for(int i = 0; i < array->length - 1; i++)
    {
        if(array->A[i+1] < array->A[i])
        {
            printf("The array is not sorted.");
            return -1;
        }
    }
    printf("The array is sorted.");
}

int main()
{   
    Arr array={{0,1,2,3,4,5,6,7,8,9},10};

    check(&array);
}