#include <stdio.h>

bool ktrakytu(char kt) {
	switch (kt) {
		case 'u':
		case 'e':
		case 'o':
		case 'a':
		case 'i':{
			return true;
			break;
		}
		default: {
			return false;
			break;
		}
	}
}

int tonguoc(int n) {
	int tong = 0;
	for (int i = 1; i<n; i++) {
		if (n%i==0) {
			tong+=n;
		}
	}
	return tong;
}

void ktrachinhphuong(int n) {
	int i=0;
	while (i*i<=n) {
		if (i*i==n) {
			printf("%d la so chinh phuong\n\n",n);
		}
		
		i++;
	}
	printf("%d khong phai so chinh phuong!\n\n", n);
}

int main() {
	int n,choice;
	char kt;
	do {
		printf("1- Kiem tra so nguyen am.\n");
		printf("2- Tim tong uoc.\n");
		printf("3- Kiem tra so chinh phuong.\n");
		printf("Choice an peration: \n");
		printf("Input choice: ");
		scanf("%d",&choice);
		
		switch(choice) {
			case 1: {
				getchar();
				printf("Input char: ");
				scanf("%c",&kt);
				if (ktrakytu(kt)){
					printf("%c la ky tu nguyen am\n\n",kt);
				}
				else {
					printf("%c khong phai la ky tu nguyen am\n\n",kt);
				}
				
				break;
			}
			
			case 2: {
				do {
					printf("Input: n ");
					scanf("%d",&n);
				} while (n<0);
				
				int tong = tonguoc(n);
				printf("%d\n",tong);
				break;
			}
			
			case 3: {
				do {
					printf("Input: n ");
					scanf("%d",&n);
				} while (n<0);
				ktrachinhphuong(n);
				break;
			}
		}
	}while(choice==1||choice==2||choice==3);
	return 0;
}
