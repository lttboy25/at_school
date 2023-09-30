#include <stdio.h>
int main() {
    float diemso=5;
    char diemchu;
    
    
    if (diemso<4.0) {
        diemchu = 'F';
    }

    else if (diemso<=5.4) {
        diemchu = 'D';
    }

    else if (diemso<=6.9) {
        diemchu = 'C';
    }

    else if (diemso<=8.4) {
        diemchu = 'B';
    }

    else if (diemso<=10.0) {
        diemchu = 'A';
    }

    printf("%c",diemchu);
    return 0;
}