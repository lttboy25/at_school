#include <stdio.h>
int main() {
    int gio,phut,giay;
    printf("Vui long nhap gio, phut, giay ");
    scanf("%d%d%d",&gio,&phut,&giay);

    if (gio >=1 && gio<=24) {
        if (phut>=1 && phut<=60) {
            if (giay>=1 && giay<=60) {
                printf("Gio, phut, giay hop le.");

            }
            else {printf("Gio, phut, giay khong hop le!");}
        }
        else {printf("Gio, phut, giay khong hop le!");}

    }
    else {printf("Gio, phut, giay khong hop le!");}
}