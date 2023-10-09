#include <stdio.h>
//bai6
int main (){
	int n,i,uoc;
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
		if (n%i==0) {
			uoc +=1;
		}
	}
	if (uoc==2) {
		printf("%d khong phai so nguyen to",n);
			}
	else {
		printf("%d la so nguyen to",n);
			}
	
	return 0;
}
