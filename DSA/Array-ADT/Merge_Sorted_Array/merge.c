#include<stdio.h>

typedef struct Arr
{
    int A[10];
    int length;
    int size;
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

void sorted(Arr *array_t1, Arr *array_t2, Arr *array_t3)
{
    int i = 0,j = 0,k = 0;
    while(i < array_t1->length && j < array_t2->length)
    {
        if(array_t1->A[i] < array_t2->A[j])
        {
            array_t3->A[k++] = array_t1->A[i++];
        }
        else
        {
            array_t3->A[k++] = array_t2->A[j++];
        }
    }
    for(; i < array_t1->length; i++)
        array_t3->A[k++] = array_t1->A[i];
    for(; j < array_t1->length; j++)
        array_t3->A[k++] = array_t2->A[j];

    display(array_t3);
    
}

int main()
{
    Arr array1 = {{1,5,7,9,11},5,10};
    Arr array2 = {{0,2,3,4,6,8},6,10};
    Arr array3 = {{0},10,10};

    printf("The 1st array\n");
    display(&array1);
    printf("The second array\n");
    display(&array2);
    printf("The merged array");
    sorted(&array1,&array2,&array3);
}
