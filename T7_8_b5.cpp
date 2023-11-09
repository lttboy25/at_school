#include <stdio.h>

int ktrasnt(int n) {
    int tong = 0;
    for (int i = 1; i<=n; i++) {
        if (n%i==0){
        	tong+=1;
		}
	}
    if (tong==2) {
        return 1;
    }
    else {return 0;
	}
}
int main() {
    int n;
    do {
    	scanf("%d",&n);
	}while(n<2);
    for (int i = 2; i<=n; i++) {
        if (ktrasnt(i)==1) {
            printf("%d ",i);
        }
        
    }
    return 0;
}
