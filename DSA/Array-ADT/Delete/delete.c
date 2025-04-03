#include<stdio.h>
#include<stdlib.h>

typedef struct Arrays
{   
    int A[10];
    int size;
    int length;
}Arr;

void display(Arr *array)
{   
    printf("The array is : ");
    for (int i = 0; i < array->length; i++)
    {
        printf("%d ", array->A[i]);
    }
}

int append(Arr *array)
{   
    int append_value;
    printf("Please enter the value to append: ");
    scanf("%d", &append_value);

    if(array->length+1 > array->size)
     {
        printf("The size of the array is exceeding its declaration limits.");
        return 0;
     }   

    array->A[array->length] = append_value;
    array->length++;
    display(array);
}

int insert(Arr *array)
{
    int insert_value, index;
    printf("Please enter the index and value to insert: ");
    scanf("%d %d",&index , &insert_value);

    if(index < 0 || index > array->length)
    {
        printf("Please insert a valid index.");
        return 0;
    }

    for(int i = array->length; i > index; i--)
    {
        array->A[i] = array->A[i-1];
    }
    array->A[index] = insert_value;
    array->length++;
    display(array);
}

int delete(Arr *array)
{
    int index, remove_value;
    printf("Please enter the index you want to remove: ");
    scanf("%d",&index);

    if(index < 0  && index > array->length)
    {
        printf("Please insert a valid index.");
        return 0;
    }   

    remove_value = array ->A[index];
    for(int i = index; i < array->length - 1; i++)
    {
        array->A[i] = array->A[i+1];
    }

    array->length--;

    printf("The value %d at index %d has been removed.\n", remove_value, index);
    display(array);
}

int main()
{
    Arr array = {{1,2,3,5,6},10,5};
    int choice;
    do
    {
        printf("1. Display the array\n");
        printf("2. Append an element to the array and display the array\n");
        printf("3. Insert an element at a given index and display the array\n");
        printf("4. Delete an element at a given index\n");
        printf("5. Enter 0 to exit.\n");
        printf("Choose the action you want to perfrom: ");
        scanf("%d", &choice);
    }while(choice > 4);

    switch(choice)
    {
        case 1: display(&array);
                break;
        case 2: append(&array);
                break; 
        case 3: insert(&array);
                break;
        case 4: delete(&array);
                break;
        case 0: break;
        default: break;
    }
    
    return 0;

}