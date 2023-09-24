#include <stdio.h>
#include <math.h>
int main()

{
    float S,R,V;
    scanf("%f",&S);
    
    R = sqrt(S/(4*M_PI));
    V = pow(R,3)*M_PI*4/3;
    printf("V = %f",V);
    
}