#include <stdio.h>
int main() {
    int N,cost;
    scanf("%d",&N);

    if (N>0&&N<=3) {
        cost = N*120000;
    }

    else if(N<=6) {
        cost = 3*120000 + (N-3)*90000;
    }

    else if(N<=10) {
        cost = 3*120000 + 3*90000 + (N-6)*85000;
    }

    else {
        cost = 3*120000 + 3*90000 + 4*85000 + (N-10)*70000;
    }

    printf("Cost = %d",cost);
}