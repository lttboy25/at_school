#include <stdio.h>
#include <math.h>

int main() {
    
    float x,y,huyen,dientich;
    
    printf("Nhap 2 canh goc vuong ");
    scanf("%f%f",&x,&y);
    
    huyen = sqrt(pow(x,2)+pow(y,2));
    dientich = (x*y)/2;
    printf("canh huyen = %f\n",huyen);
    printf("dien tich = %f",dientich);
    
    return 0;
}