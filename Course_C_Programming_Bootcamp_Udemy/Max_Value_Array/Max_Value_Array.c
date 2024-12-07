#include<stdio.h>
#include<conio.h>

int cal_max(int T_arr[], int length);


int main()
{
    int arr[10], max;

    for(int i = 0; i<10; i++)
    {
        printf("Enter the %d place digit: ", i+1);
        scanf("%d", &arr[i]);
    }

    max = cal_max(arr, 10);
    
    printf("The biggest digit in the number is: %d", max);

    getch();
}

int cal_max(int T_arr[],int length)
{   int T_max = T_arr[0];
    for (int i = 0; i < length; i++)
    {
        if(T_arr[i]>T_max)
        {
            T_max = T_arr[i];
        }
    }
    
    return T_max;
}
