#include<stdio.h>
#include<conio.h>
#define DAYS 7 //no. of days in a week
float t_average(float []);
int hot_cold_day(float [], int);
void print_day(int,int);

int main()
{
    float week[DAYS], average; //average = average temperature of the week
    int day; // hottest day, coldest day

    printf("Please enter the temperature of the 7 days when prompted:\n");
    for (int i = 0; i < DAYS; i++)
    {
        printf("Please enter the temperature for day %d: ", i+1);
        scanf("%f", &week[i]);
    }

    average = t_average(week);
    printf("The average temperature of the week is: %.2f\n",average);

    day = hot_cold_day(week ,1);

    print_day(day, 1);

    day = hot_cold_day(week, 2);

    print_day(day, 2);
    
}

float t_average(float d_week[DAYS])
{   float t_average = 0, t_sum = 0; //t_average = temp average for this function, t_sum = temp sum for this function
    for (int i = 0; i < DAYS; i++)
    {
        t_sum += d_week[i];
    }

    t_average = t_sum/DAYS;    
    return t_average;
}

int hot_cold_day(float d_week[DAYS], int choice)
{
    if (choice == 1)
    {
        float max = 0;
        int hot_day;
        for(int i = 0; i<DAYS; i++)
        {
            if (d_week[i]>max)
            {
                max = d_week[i];
                hot_day = i+1;
            }
        } 
        return hot_day;
    }

    if (choice == 2)
    {
        float min = d_week[0];
        int cold_day;
        for(int i = 0; i<DAYS; i++)
        {
            if (d_week[i]<min)
            {
                min = d_week[i];
                cold_day = i+1;
            }
        }
        return cold_day;
    }
    
}

void print_day(int t_day, int t_choice)
{  char *f_day; 
    switch (t_day)
    {
    case 1:
        f_day = "Monday";
        break;
    case 2:
        f_day = "Tuesday";
        break;
    case 3:
        f_day = "Wednesday";
        break;
    case 4:
        f_day = "Thursday";
        break;
    case 5:
        f_day = "Friday";
        break;
    case 6:
        f_day = "Saturday";
        break;
    case 7:
        f_day = "Sunday";
        break;
    default:
        printf("Function is breaking.");
        break;
    }

    if (t_choice == 1)
    {
        printf("The hottest day of the week is: %s\n", f_day);
    }

    else if (t_choice == 2)
    {
        printf("The coldest day of the week is: %s\n", f_day);
    }

}

