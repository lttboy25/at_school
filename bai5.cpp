#include <stdio.h>
int main()
{
    float height,weight,BMI;
    printf("input height (m): ");
    scanf("%f",&height);

    printf("input weight (Kg): ");
    scanf("%.2f",&weight);
    height = height/100;

    BMI = weight/(height*height);
    printf("BMI = %.2f",BMI);
}