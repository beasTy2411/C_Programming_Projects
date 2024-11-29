#include<stdio.h>
#include<conio.h>

void main()
{
    int hours, minutes, seconds, remainingSeconds;

    printf("Please enter the seconds to convert: ");
    scanf("%d", &seconds);

    hours = seconds / 3600 ; 
    minutes = (seconds - hours*3600) / 60;
    remainingSeconds = (seconds - hours*3600) % 60;

    if(hours < 10)
    {
        printf("0");
    }
    printf("%d:", hours);
    
    if(minutes < 10)
    {
        printf("0");
    }
    printf("%d:", minutes);
    
    if(remainingSeconds < 10)
    {
        printf("0");
    }
    printf("%d", remainingSeconds);
    

    printf("\nPress any key to continue...");

    getch();
}