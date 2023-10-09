#include <stdio.h>
#include <ctype.h>
int main() {
	char kt;
	int demnguyenam=0,demphuam=0;
	do {
		if (kt!=10) {
			scanf("%c",&kt);
			kt = toupper(kt);
			if (kt>='A'&&kt<='Z') {
				switch (kt) {
					case'A':
					case'O':
					case'I':
					case'U':
					case'E':
					demnguyenam++;break;
					
					default: demphuam++;	
				}
			}
		}
	}while (kt!=10);
	
	printf("so nguyen am = %d\nso phu am = %d",demnguyenam,demphuam);
	return 0;
}
