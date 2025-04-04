#include<stdio.h>

typedef struct Arr
{
    int A[15];
    int length;
    int size;
}Arr;

int binary_search_loop(Arr *array,int key)
{   int low = 0;
    int high = array->length-1;
    int mid;
    while(low <= high)
    {   
        mid = (low + high)/2;
        if(key == array->A[mid])
        {
            printf("The element %d is present at index %d.\n", key, mid);
            return 0;
        }
        else if(key < array->A[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    
    printf("The element %d is not present in the array.\n", key);
    return -1;
}

int binary_search_recursive(Arr *array, int low, int high, int key)
{   int mid;
    if(low <= high)
    {
        mid = (low + high)/2;
        if(key == array->A[mid])
        {   
            printf("The element %d is present at index %d.\n", key, mid);
            return 0;
        }
        else if(key < array->A[mid])
            return binary_search_recursive(array, low, mid-1, key);
        else
            return binary_search_recursive(array, mid + 1, high, key);
    } 
    printf("The element %d is not present in the array.\n", key);
    return -1;  
}

int main()
{
    Arr array = {{4,8,10,15,18,21,24,27,29,33,34,37,39,43,45},15,15};
    int key, choice;

    do
    {
        printf("1. Binary Search using Loops\n");
        printf("2. Binary Search using Recursion\n");
        printf("3. Press 0 to exit\n");
        printf("Please enter a choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Please enter the key you want to search: ");
            scanf("%d", &key);
            binary_search_loop(&array, key);
            break;
        case 2:
            printf("Please enter the key you want to search: ");
            scanf("%d", &key);
            binary_search_recursive(&array, 0, array.length - 1, key);
            break;
        case 0: break;
        default:
            break;
        }
    }while(choice > 2);
    
    return 0;
}
