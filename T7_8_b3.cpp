#include <stdio.h>
int sum(int n) {
    int tong=0;
    do {
        scanf("%d",&n);
        if (n>=0) {
        tong = tong +n;}
    }while (n>=0);
    return tong;
    
}

int main() {
    int tong;
    printf("%d",sum(tong));
    return 0;
}