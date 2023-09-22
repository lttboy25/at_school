#include <stdio.h>
#include <math.h>

int main() {
    
    float a,b,c,p,dientich,chuvi;
    
    printf("Nhap 3 canh  ");
    scanf("%f%f%f",&a,&b,&c);
    
    p = (a+b+c)/2;
    
    dientich = sqrt(p*(p-a)*(P-b)*(p-c));
    chuvi =  (a+b+c);
    printf("dien tich = %f",dientich);
    printf("chu vi = %f",chuvi);
    
    return 0;
}