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

void inserting(Arr *array, int x)
{
    int i = array->length - 1;
    while(array->A[i] > x)
    {
        array->A[i+1] = array->A[i];
        i--;
    }
    array->A[i + 1] = x;
    array->length++;
}

int main()
{
    Arr array = {{4,8,10,13,24,35,45,50},8,10};
    int element;
    printf("Please enter the element you want to add: ");
    scanf("%d", &element);
    printf("The array before adding the element: \n");
    display(&array);
    inserting(&array, element);
    printf("The array after adding the element: \n");
    display(&array);
    return 0;
}