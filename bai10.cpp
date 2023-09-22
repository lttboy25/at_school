#include <stdio.h>
#include <math.h>
int main()

{
    const float PI = 3.141593;
    float S,R,V;
    scanf("%f",&S);
    
    R = sqrt(S/(4*PI));
    V = pow(R,3)*PI*4/3;
    printf("V = %f",V);
    
}