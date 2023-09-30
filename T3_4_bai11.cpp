#include <stdio.h>
int main() {
    int kwhs,prices;
    scanf("%d",&kwhs);

    if (kwhs<=100) {
        prices = kwhs*950;
    }
    
    else if (kwhs<=150) {
        prices = 100*950+(kwhs-100)*1250;
    }

    else if(kwhs<=200) {
        prices = 100*950+50*1250+(kwhs-150)*1350;
    }

    else {
        prices = 100*950+50*1250+50*1350+(kwhs-200)*1550;
    }
    printf("prices = %d",prices);
    return 0;
}