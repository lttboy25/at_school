#include <stdio.h>
#define MAX 100
#include <time.h>
#include <stdlib.h>
void nhapmang(int a[], int &n);
void xuatmang(int a[], int n);
void themdau(int a[], int n);
void themvt(int a[], int n);
void themcuoi(int a[], int n);
void sinhmang(int a[], int &n);
int main() {
	int a[MAX]; int n; int chon;
	nhapmang(a,n);

	do {
		printf("\n-----Menu-----");
		printf("\n1. Them gia tri vao dau mang.");
		printf("\n2. Them gia tri vao cuoi mang.");
		printf("\n3. Them gia tri vao vi tri minh muon mang.");
		printf("\n4. Sinh mang.");
		printf("\n0. Ket thuc chuong trinh!");
		printf("\nChon: ");
		scanf("%d",&chon);
		switch (chon) {
			case 1: {
				themdau(a,n);
				break;
			}
			case 2: {
				themcuoi(a,n);
				break;
			}
			case 3: {
				themvt(a,n);
				break;
			}
			case 4: {
				sinhmang(a,n);
				break;
			}
			default: {
				printf("End programing...");
				break;
			}
		}
		
	}while(chon!=0);
	
}


void nhapmang(int a[], int &n) {
	printf("Input the size of array: ");
	scanf("%d",&n);
	printf("Nhap mang:\n");
	for (int i = 0; i<n; i++) {
		printf("Vi tri [%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void xuatmang(int a[], int n) {
	printf("Xuat mang:\n");
	for (int i = 0; i<n; i++) {
		printf(" %d ", a[i]);
	}
}

void themdau(int a[], int n) {
	int x;
	printf("Nhap gia tri can them: ");
	scanf("%d",&x);
	for (int i = n; i>0; i--) {
		a[i] = a[i-1];
	}
	a[0] = x;
	n++;
	xuatmang(a,n);
}

void themvt(int a[], int n) {
	int x,vt;
	printf("Nhap gia tri can them: ");
	scanf("%d",&x);
	printf("Nhap vi tri can them: ");
	scanf("%d",&vt);
	for (int i = n; i>vt; i--) {
		a[i] = a[i-1];
	}
	a[vt] = x;
	n++;
	xuatmang(a,n);
}

void themcuoi(int a[], int n) {
	int x;
	printf("Nhap gia tri can them: ");
	scanf("%d", &x);
	
		a[n] = x;
		n++;
		xuatmang(a,n);
	
}

void sinhmang(int a[], int &n) {
	printf("Nhap n: ");
	scanf("%d",&n);
	srand(time(NULL));
	
	for (int i = 0; i<n ; i++) {
		a[i] = rand()%10;
	}
	xuatmang(a,n);
}

