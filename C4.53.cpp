#include <stdio.h>
int main()
{
	int a,b;
	printf("Nhap a va b = ");
	scanf("%d%d",&a,&b);
	if (a>b)
		printf("%d lon hon %d",a,b);
	
	printf("%d lon hon %d",b,a);
}
