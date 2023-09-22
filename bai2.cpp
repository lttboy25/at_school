#include <stdio.h>
#include <math.h>

int main() {
    float ketqua;
    float x;
    scanf(" %f",&x);
    
    ketqua = (pow(x,2)/(1+(pow(x,2)/(1+(pow(x,2)/(1+(pow(x,2))))))));
    
    printf("%.4f",ketqua);
    
    return 0;
}