#include <stdio.h>
int main() {
	char kytu;
	scanf("%c",&kytu);
	if ((kytu>= 'A' && kytu<='Z')||(kytu>= 'a' && kytu<='z')) {
		if (kytu == 'a'||kytu=='A'||kytu=='U'||kytu=='u'||kytu=='E'||kytu=='e'||kytu=='O'||kytu=='o'||kytu=='i'||kytu=='I') {
		printf("day la nguyen am");
		}
		else {printf("Day la phu am");
		}
	
	}
	else {printf("Day ko phai ky tu chu");
	}
}
