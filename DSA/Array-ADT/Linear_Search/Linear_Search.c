#include<stdio.h>
#include<stdlib.h>

typedef struct Arrays
{   
    int A[10];
    int size;
    int length;
}Arr;

void display(Arr *);
int search(Arr *);
void swap(int *, int *);

void display(Arr *array)
{   
    printf("The array is : ");
    for (int i = 0; i < array->length; i++)
    {
        printf("%d ", array->A[i]);
    }
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int search_linear(Arr *array)
{
    int key;
    printf("Please enter the element you need to search: ");
    scanf("%d", &key);
    
    for(int i = 0; i < array->length; i++)
    {   
        if(key == array->A[i])
        {
            printf("The element %d is present at index %d.\n", key, i);
            display(array);
            return 0;
        }    
    }
    printf("The element %d is not present in the array.", key);
    return -1;
}

int search_linear_transposition(Arr *array)
{
    int key;
    printf("Please enter the element you need to search: ");
    scanf("%d", &key);
    
    for(int i = 0; i < array->length; i++)
    {   
        if(key == array->A[i])
        {
            printf("The element %d is present at index %d.\n", key, i);
            swap(&array->A[i], &array->A[i-1]);
            display(array);
            return 0;
        }    
    }
    printf("The element %d is not present in the array.", key);
    return -1;
}

int search_linear_MTH(Arr *array)
{
    int key;
    printf("Please enter the element you need to search: ");
    scanf("%d", &key);
    
    for(int i = 0; i < array->length; i++)
    {   
        if(key == array->A[i])
        {
            printf("The element %d is present at index %d.\n", key, i);
            swap(&array->A[i], &array->A[0]);
            display(array);
            return 0;
        }    
    }
    printf("The element %d is not present in the array.", key);
    return -1;
}

int main()
{
    Arr array = {{8,9,4,7,6,3,10,5,14,2},10,10};
    int choice;
    do
    {
        printf("1. Perform a normal linear search.\n");
        printf("2. Perform a transposition linear search.\n");
        printf("3. Perform a move to head linear search.\n");
        printf("4. Enter 0 to exit.\n");
        printf("Choose the action you want to perfrom: ");
        scanf("%d", &choice);
    }while(choice > 5);

    switch(choice)
    {
        case 1: search_linear(&array);
                break;
        case 2: search_linear_transposition(&array);
                break;
        case 3: search_linear_MTH(&array);
                break;
        case 0: break;
        default: break;
    }
    
    
    return 0;
}