#include <stdio.h>
int main(){
    int a,b,c;
    printf("nhap a = ");
    scanf("%d",&a);
    printf("\nnhap b = ");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    
    printf("a = %d",a);
    printf("\nb = %d",b);
}