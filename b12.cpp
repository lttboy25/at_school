#include <stdio.h>
#include <math.h>
int main() {
    int x;
    float y1,y2;

    scanf("%d",&x);

    y1 = 4*(pow(x,2)+10*x*sqrt(x)+3*x+1);

    y2 = ((sin(M_PI*pow(x,2)))+sqrt(pow(x,2)+1))/(exp(2*x)+cos(M_PI*x/4));

    printf("%f\n",y1);
    printf("%f",y2);
}