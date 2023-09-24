#include <stdio.h>
int main()
{
    float C,F;
    printf("Nhap do F ");
    scanf("%f",&F);
    C = (float) (F-32)*5/9;
    printf("\nDoi do F sang do C la %f",C);

    printf("\nNhap do C ");
    scanf("%f",&C);
    F = (float) 9*C/5+32;
    printf("Doi do C sang do F la %f",F);

}