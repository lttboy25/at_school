#include <stdio.h>
int main(){
	int a,b,usln;
	scanf("%d%d",&a,&b);
	if (a<b) {
		for (int i=1;i<=a;i++) {
			if (a%i==0 && b%i==0) {
				usln=i;
			}
		}
	}
	else {
		for (int i=1;i<=b;i++) {
			if (a%i==0 && b%i==0) {
				usln=i;
			}	
		}
	}
	printf("uoc so chung lon nhat la %d", usln);
	return 0;
}
