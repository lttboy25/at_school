#include <stdio.h>

// h�m chia hai s?
void divideNumbers(double* n1, double* n2, double* result) 
{
  *result = (*n1) / (*n2);
}

int main() {

    // nh?n d?u v�o
    double number1;
    double number2;
    scanf("%lf %lf", &number1, &number2);
    
    double result;

    // g?i h�m chia v?i tham s? l� ba d?a ch?
    divideNumbers(&number1, &number2, &result);
    
    
    // in ra k?t qu?
    printf("%.2lf",result);

    return 0;
}

