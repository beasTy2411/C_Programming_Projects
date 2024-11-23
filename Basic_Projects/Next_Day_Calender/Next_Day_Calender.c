#include<stdio.h>

void main()
{
    int day, month, year;
    int leapYear = 0;

    printf("Enter the day: ");
    scanf("%d", &day);
    printf("Enter the month: ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);

    if(month == 2)
    {
        if (year %4 == 0 && (year % 100 != 0 || year % 400 == 0))
        {   
            leapYear = 1 ;
        }
    }

     day +=1;

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
            if (day <= 31)
                break;
    case 4:
    case 6:
    case 9:
    case 11:
            if(day <= 30)
               break;
    case 2:
            if(leapYear == 1 && day <= 29)
                break;
            else if (day <= 28)
                break;
            
                    
    default:
        day = 1;
        month += 1;
        if (month > 12)
        {
            month = 1;
            year +=1;
        }
        
        break;
    }

    printf("The next day is: %d/ %d/ %d", day, month, year);
    
}