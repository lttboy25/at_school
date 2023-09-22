#include <stdio.h>
#include <math.h>

int main() {
    float ketqua,x,y;
    
    scanf(" %f%f",&x,&y);
    
    ketqua = (sqrt(1+pow(x,2)+pow(y,2)))/(3+(x+y)*(x+y));
    
    printf("%.4f",ketqua);
    
    return 0;
}