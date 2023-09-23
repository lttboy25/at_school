#include <stdio.h>
int main()
{
    int second_int,second,minutes,hour;
    
    printf("input second: ");
    scanf("%i",&second_int);

    
    hour = second_int/60/60;
    minutes = second_int/60-(hour*60);
    second = second_int % 60;

    printf("H:M:S - %i:%i:%i",hour,minutes,second);


}