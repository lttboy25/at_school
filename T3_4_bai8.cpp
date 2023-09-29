#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	
	if ((a+b>c)&&(a+c>b)&&(b+c>a)) {
		if (a==b&&a==c) {printf("tam giac deu");
		}
		else if ((a==b)||(a==c)||(b==c)) {printf("tam giac can");
		}
		else {printf("tam giac thuong");
		}
	}
	else {
		printf("khong phai tam giac");
	}
}
