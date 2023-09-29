#include <stdio.h>
int main() {
    int sokm,tien;
    printf("Nhap vao so km ");
    scanf("%i",&sokm);

    if (sokm<=1) {
        tien = 5000;
    }
    else if (sokm<30) {
        tien = 5000 + (sokm-1)*1000*500;

    }
    else {
        tien = 5000 + (29*1000*500) +(sokm-30)*3000;
    }
}