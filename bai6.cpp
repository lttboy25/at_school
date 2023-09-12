#include <stdio.h>
int main()
{
    int day_int,year,a,week,day;
    printf("input day = ");
    scanf("%i",&day_int);

    year = day_int/365;
    printf("Year %i",year);

    a = day_int %365;
    
    week = a/7;
    printf("\nWeek %i",week);

    day = a%7;
    printf("\nDay %i",day);
    
}