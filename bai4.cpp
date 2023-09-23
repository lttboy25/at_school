#include <stdio.h>

int main()
{
    float n,c,s;
    printf("nhap ban kinh ");
    scanf("%f",&n);

    c = n*2*3.14;
    s = 3.14*n*n;
    printf("Chu vi hinh tron voi ban kinh %.3f la %.1f",n,c);
    printf("\nDien tich hinh tron voi ban kinh %.3f la %.1f",n,s);

}