#include <stdio.h>

int main() {
    int n ,tong,du;
    
    printf("Nhap n = ");
    scanf("%d",&n);
    du = n%100;
    tong = n/100 + du/10 +du%10;
    printf("Tong= %d",tong);
} 