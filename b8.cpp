#include <stdio.h>
int main(){
    int a =123,b=456,tich,donvi,chuc,tram;
    printf("Nhap so co 3 chu so = \n");
    scanf("%3d%3d",&a,&b);
    tich = a*b;
    tram = b/100;
    chuc = b%100/10;
    donvi = b%100%10;
    printf("   %3d\n",a);
    printf(" x %3d",b);
    printf("\n------\n");
    printf("   %d\n",donvi*a);
    printf("%5d\n",chuc*a);
    printf("%d\n",tram*a);
    printf("-----\n");
    printf("%d",tich);
}