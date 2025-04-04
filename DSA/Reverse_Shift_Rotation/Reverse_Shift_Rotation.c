#include<stdio.h>
#include<stdlib.h>

typedef struct Arr
{
    char A[10];
    int length;
    int size;
}Arr;

void reverse_array(Arr *);
void reverse_pointers(Arr *);
void left_shift(Arr *);
void right_shift(Arr *);
void left_rotation(Arr *);
void right_rotation(Arr *);

void display(Arr *array)
{   
    printf("The array is : ");
    for (int i = 0; i < array->length; i++)
    {
        printf("%c ", array->A[i]);
    }
    printf("\n");
}

// 1. Reverse using array
void reverse_array(Arr *array)
{   printf("Array before reverse\n");
    display(array);
    int i, j;
    char *B = (char *)malloc(array->length*sizeof(char));
    for(i = array->length - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = array->A[i];
    }
    for(i = 0; i < array->length; i++)
    {
        array->A[i] = B[i];
    }
    printf("Array after reverse\n");
    display(array);
}

// 2. Reverse using 2 pointers
void reverse_pointers(Arr *array)
{   
    printf("Array before reverse\n");
    display(array);
    int i , j;
    char temp;
    for (i = 0, j = array->length-1; i < j ; i++, j--)
    {
        temp = array->A[i];
        array->A[i] = array->A[j];
        array->A[j] = temp;
    }
    printf("Array after reverse\n");
    display(array);
}

// 3. Left Shift
void left_shift(Arr *array)
{   
    printf("Array before shift\n");
    display(array);
    for (int i = 0; i < array->length - 1; i++)
    {
        array->A[i] = array->A[i+1];
    }
    array->A[array->length-1] = '-';
    printf("Array after shift\n");
    display(array);
}

// 4. Right Shift
void right_shift(Arr *array)
{
    printf("Array before shift\n");
    display(array);
    for (int i = array->length-1 ; i > 0; i--)
    {
        array->A[i] = array->A[i-1];
    }
    array->A[0] = '-';
    printf("Array after shift\n");
    display(array);
}

// 5. Left Rotation
void left_rotation(Arr *array)
{   
    printf("Array before rotation\n");
    display(array);
    char c = array->A[0];
    for (int i = 0; i < array->length - 1; i++)
    {
        array->A[i] = array->A[i+1];
    }
    array->A[array->length-1] = c;
    printf("Array after rotation\n");
    display(array);
}

// 6. Right Rotation
void right_rotation(Arr *array)
{   
    printf("Array before shift\n");
    display(array);
    char c = array->A[array->length-1];
    for (int i = array->length-1 ; i > 0; i--)
    {
        array->A[i] = array->A[i-1];
    }
    array->A[0] = c;
    printf("Array after rotation\n");
    display(array);
}

int main()
{
    Arr array = {{'W','E','L','C','O','M','E','_','_','_'},10,10};
    int choice;

    do
    {
        printf("1. Reverse the array using temporary array\n");
        printf("2. Reverse the array using two pointers\n");
        printf("3. Shift elements in the array towards left\n");
        printf("4. Shift elements in the array towards right\n");
        printf("5. Rotate elements in the array towards left\n");
        printf("6. Rotate elements in the array towards right\n");
        printf("Please enter a choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            reverse_array(&array);
            break;
        case 2:
            reverse_pointers(&array);
            break;
        case 3:
            left_shift(&array);
            break;
        case 4:
            right_shift(&array);
            break;
        case 5:
            left_rotation(&array);
            break;
        case 6:
            right_rotation(&array);
            break;
        case 0: break;
        default:
            break;
        }
    }while(choice > 6);
    
    return 0;
}
