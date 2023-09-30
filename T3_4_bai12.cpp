#include <stdio.h>
int main() {
    int thang=13,nam=2012;
    
    if (nam>0&&thang>0&&thang<13) {
        if ((nam%4==0)&&(nam%100!=0)||(nam% 400==0)){
            if (thang ==2){
                printf("so ngay trong thang = 29");
            }     

            else if ((thang ==1)||(thang==3)||(thang==5)||(thang==7)||(thang==8)||(thang==10)||(thang==12)) {
                printf("so ngay trong thang = 31");
            }

            else {
                printf("so ngay trong thang = 30");
            }

        }

        else {
            if (thang ==2){
                printf("so ngay trong thang = 28");
            }     

            else if ((thang ==1)||(thang==3)||(thang==5)||(thang==7)||(thang==8)||(thang==10)||(thang==12)) {
                printf("so ngay trong thang = 31");
            }

            else {
                printf("so ngay trong thang = 30");
            }
        }
    }
    else {
        printf("Nhap sai");

    }
    return 0;
}