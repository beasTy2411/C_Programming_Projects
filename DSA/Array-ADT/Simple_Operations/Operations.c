#include<stdio.h>

typedef struct Arr
{
    int A[15];
    int length;
    int size;
}Arr;

void get_element(Arr*, int);
void set_element(Arr*, int);
void max_element(Arr*);
void min_element(Arr*);
void sum_of_all(Arr*);
void average_of_all(Arr*);

void display(Arr *array)
{   
    printf("The array is : ");
    for (int i = 0; i < array->length; i++)
    {
        printf("%d ", array->A[i]);
    }
    printf("\n");
}

// 1. Get
void get_element(Arr *array, int index)
{   
    if(index >=0 && index < array->length)
        printf("The element at index %d is %d: \n", index, array->A[index]);
    else
        printf("The given index is invalid");
}

// 2. Set
void set_element(Arr *array, int index)
{  
    if(index >=0 && index < array->length) 
    {   int input, replaced;
        printf("Please enter the value to replace with: ");
        scanf("%d", &input);
        printf("The array before the replacement\n");
        display(array);
        replaced = array->A[index];
        array->A[index] = input;
        printf("The value %d at index %d is replaced with %d.\n", replaced, index, input);
        display(array);
    }
    else
        printf("The given index is invalid");
}

// 3. Max
void max_element(Arr* array)
{
    int max = array->A[0];
    for(int i = 0; i < array->length; i++)
    {
        if(max < array->A[i])
            max = array->A[i];
    }
    printf("The largest element in the array is: %d", max);
}

// 4. Min
void min_element(Arr* array)
{
    int min = array->A[0];
    for(int i = 1; i < array->length; i++)
    {
        if(min > array->A[i])
            min = array->A[i];
    }
    printf("The smallest element in the array is: %d", min);
}

// 5. Sum
void sum_of_all(Arr *array)
{
    int sum = 0;
    for(int i = 0; i < array->length; i++)
    {
        sum += array->A[i];
    }
    printf("The sum of all the element in the array is: %d", sum);
}

// 6. Average
void average_of_all(Arr *array)
{
    int sum = 0;
    float average;
    for(int i = 0; i < array->length; i++)
    {
        sum = sum + array->A[i];
    }
    average = (float) sum/array->length;
    printf("The average of all the element in the array is: %.1f", average);
}

int main()
{
    Arr array = {{4,8,10,15,18,21,24,90,29,33,34,37,39,43,45},15,15};
    int choice, index;

    do
    {
        printf("1. Display an element at a given index\n");
        printf("2. Replace an element at a given index\n");
        printf("3. Find the highest element in the list\n");
        printf("4. Find the lowest element in the list\n");
        printf("5. Find the sum of all the element in the list\n");
        printf("6. Find the average of all the element in the list\n");
        printf("Please enter a choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Please enter the index you want to diplay: ");
            scanf("%d", &index);
            get_element(&array, index);
            break;
        case 2:
            printf("Please enter the index you want to replace: ");
            scanf("%d", &index);
            set_element(&array, index);
            break;
        case 3:
            max_element(&array);
            break;
        case 4:
            min_element(&array);
            break;
        case 5:
            sum_of_all(&array);
            break;
        case 6:
            average_of_all(&array);
            break;
        case 0: break;
        default:
            break;
        }
    }while(choice > 6);
    
    return 0;
}
