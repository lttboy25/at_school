#include <stdio.h>
#include <math.h>
int main() {
    double a,b,c;
    printf("Vui long nhap 3 canh cua tam giac ");
    scanf("%lf%lf%lf",&a,&b,&c);
    if ((a+b>c) && (a+c>b) && (b+c>a)) {
        if (a==b==c) {
            printf("tam giac deu");
        }

        else if (pow(a,2)+pow(b,2)==pow(c,2) || pow(a,2)+pow(c,2)==pow(b,2) || pow(c,2)+pow(b,2)==pow(a,2)) {
            if ((a==b)||(a==c)||(b==c)) {
                printf("tam giac vuong can");

            }
            else {printf("tam giac vuong");}

        }

        else if ((a==b)||(a==c)||(b==c)) {
                printf("tam giac can");
        }

        else {printf("tam giac thuong");}

    }
    else {printf("khong phai tam giac");}
}
