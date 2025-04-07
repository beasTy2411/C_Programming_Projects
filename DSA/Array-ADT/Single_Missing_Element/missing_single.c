#include<stdio.h>

typedef struct Arr
{
    int A[10];
    int length;
    int size;
}Arr;

int missing_single(Arr *array)
{
    int Sum, s = 0;
    Sum = (array->A[9]*(array->A[9] + 1))/2;

    for(int i = 0; i < array->length; i++)
    {
        s += array->A[i];
    }
    return Sum - s;
}

int missing_single_2(Arr *array)
{   
    int i = 0;
    int diff = array->A[1] - array->A[0];
    for( i = 0; i < array->length; i+diff)
    {
        if((array->A[i] - i) != diff)
        {
            return array->A[i-1] + diff;
        }
    }
}

int main()
{
    Arr array = {{1,2,3,4,5,6,8,9,10,11},10,10};

    printf("The missing element is: %d\n", missing_single(&array));
    printf("The missing element is: %d", missing_single_2(&array));
    return 0;
}