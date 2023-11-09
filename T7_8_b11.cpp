#include <stdio.h>
#include <math.h>

int ktrasnt(int n) {
	int tong=1;
	if (n==1||n==2) {
		printf("%d la so nguyen to!",n);
	}
	else if (n>2) {
		for (int i = 2; i<=n; i++) {
			if (n%i==0){
				tong+=1;
			}	
		}
		if (tong==2) {
			printf("%d la so nguyen to!",n);
		}
		else {
			printf("%d khong phai la so nguyen to!",n);
		}	
	}
}

void printMinMaxDigit(int n) {
	int min=10,max,i;
	int digit;
	digit =n;
	while (n>0){
		i = n%10;
		n = n/10;
		
		if (i>=max) 
			max = i;
			
		if (i<=min) 
			min = i;
	}
		printf("Min %d is: %d\n",digit,min);
		printf("Max %d is: %d",digit,max);
}

void end(){
	printf("Your program is end!");
}

int main() {
	int luachon,n;
	do {
		printf("1- So nguyen to.\n");
		printf("2- In chu so min,max.\n");
		printf("3- Thoat.\n");
		printf("Chon chuc nang: ");
		
		scanf("%d",&luachon);
		
		switch(luachon) {
			case 1:
				do {
					printf("Vui long nhap so tu nhien N: ");
					scanf("%d",&n);
				}while(n<0);
				
				ktrasnt(n);	
					
				break;
				
			case 2:
				do {
					printf("Vui long nhap so tu nhien N: ");
					scanf("%d",&n);
				}while(n<0);
				
				printMinMaxDigit(n);
				
				break;
				
			case 3:
				end();
				break;
		}
		
	}while(n<0||n>3);
}








