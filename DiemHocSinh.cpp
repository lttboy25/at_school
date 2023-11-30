#include <stdio.h>
#include <ctype.h>

int main() {
	int doituong;
	char khuvuc;
	float diemchuan, diem3mon1,diem3mon2,diem3mon3, diemkhuvuc, diemdoituong;
	printf("Diem chuan: ");
	scanf("%f",&diemchuan);
	
	printf("Diem 3 mon: ");
	scanf("%f %f %f",&diem3mon1,&diem3mon2,&diem3mon3);
	
	getchar();
	printf("Khu vuc: ");
	scanf("%c",&khuvuc);
	khuvuc = toupper(khuvuc);
	switch (khuvuc) {
		
		printf("%c",khuvuc);
		case 'A': {
			diemkhuvuc = 2;
			break;
		}
		case 'B': {
			diemkhuvuc = 1;
			break;
		}
		case 'C': {
			diemkhuvuc = 0.5;
			break;
		}
	}
	
	
	printf("Doi tuong: ");
	scanf("%d",&doituong);
		switch (doituong) {
		case 1: {
			diemdoituong=2.5;
			break;
		}
		case 2: {
			diemdoituong=1.5;
			break;
		}
		case 3: {
			diemdoituong=1;
			break;
		}
	}
	
	float diemtong = (diem3mon1+diem3mon2+diem3mon3) + diemkhuvuc + diemdoituong;
	if (diemtong>=diemchuan) {
		printf("Dau[%.0f] ",diemtong);
	}
	else {
		printf("Rot[%.0f] ",diemtong);
	}
	
	
}
