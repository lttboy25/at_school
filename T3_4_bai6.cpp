#include <stdio.h>
int main()
{
	char kytu;
	printf("Nhap ky tu = ");
	scanf("%c",&kytu);
	if ((kytu>= 'A' && kytu<='Z')) {
		printf("This is a Upper character");
	}
	
	else if ((kytu>= 'a' && kytu<='z')){
		printf("This is a Lower character");
	}
	
	else if ((kytu>= '0' && kytu<='9')) {
		printf("This is a Number character");
	}
	
	else {
		printf("This is a special character");
	}
}
