#include <stdio.h>
#define MAX 100
#include <stdlib.h>
#include <time.h>

void nhapmang(int a[], int &n) {
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Nhap mang: ");
	for (int i = 0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	
}


void xuatmang (int a[], int &n)
{
	printf("Xuat mang: ");
	
	for (int i = 0; i<n; i++) 
	{
		printf("%d ", a[i]);
	}
}

void sinhmang(int a[],int &n) 
{
	
	srand(time(NULL));
	for (int i = 0; i<n; i++) {
		a[i] = rand();
	}
	xuatmang(a,n);
}
void themdau(int a[],int &n, int x)
{	
	printf("So x muon them la: ");
	scanf("%d",&x);
	for (int i = n; i>=0; i--) {
		a[i] = a[i-1];
	}
	a[0] = x;
	n++;
	xuatmang(a,n);
}

void themcuoi(int a[],int &n, int &x) {
		printf("So x muon them la: ");
		scanf("%d",&x);
		if (n>=100) 
		{
			printf("Mang da day, khong the them!");
		}
		else 
		{
			a[n] = x;
			n++;
		}
		xuatmang(a,n);
	}

void themvt(int a[],int &n, int x, int vt) {
	printf("So x muon them la: ");
	scanf("%d",&x);
	printf("Nhap vi tri ban muon them: ");
	scanf("%d",&vt);
	for (int i = n; i>vt; i--) {
		a[i] = a[i-1];
	}
	a[vt] = x;
	n++;
	xuatmang(a,n);
}

void xoacuoi(int a[], int n) {
	n--;
	xuatmang(a,n);
}

void xoavt(int a[], int n, int vt) {
	for(int i = vt; i<n; i++) {
		a[i] = a[i+1];
	}
	n--;
	xuatmang(a,n);
}

void xoadau(int a[], int n) {
	
	for (int i = 0; i<n-1; i++) {
		a[i] = a[i+1];
	}
	n--;
	xuatmang(a,n);
}

int timx(int a[], int n, int x) {
	for(int i = 0; i<n; i++) {
		if (a[i]==x) {
			return i;
		}
	}
	return -1;
}

int timmax(int a[], int n) {
	int max = a[0];
	int i;
	for (i = 0; i<n; i++) {
		if (a[i]>max) {
			max = a[i];
		}
	}
	return timx(a,n,max);
}

void sapxep(int a[], int n) {
    int tg;
    for (int i = 0; i<n-1; i++) {
    	for (int j = i+1; j<n; j++) {
    		if (a[i] > a[j]) {
    			tg = a[i];
    			a[i] = a[j];
    			a[j] = tg;
			}
		}
	}
	printf("Mang da sap xep: ");
	for (int i = 0; i<n; i++) {
		printf("%d ", a[i]);
	}
}


void xoax(int a[], int n, int x) {
	printf("Nhap X ban muon xoa: ");
	scanf("%d",&x);
	int vt = timx(a,n,x);
	xoavt(a,n,vt);
}

void xoamax(int a[], int n) {
	int vt = timmax(a,n);
	xoavt(a,n,vt);
}


int main() {
	int a[MAX], n,x,vt,chon;
	nhapmang(a,n);
	do {
		
		printf("\n********** MENU **********");
		printf("\n1. Sinh mang.");
		printf("\n2. Them X o dau. ");
		printf("\n3. Them X o cuoi.");
		printf("\n4. Them X o vi tri.");
		printf("\n5. Xoa dau.");
		printf("\n6. Xoa cuoi.");
		printf("\n7. Xoa vi tri.");
		printf("\n8. Xoa so X.");
		printf("\n9. Xoa MAX.");
		printf("\n10. Sap xep theo thu tu tang dan.");
		printf("\n0. De ket thuc chuong trinh.");
		printf("\n Chon: ");
		scanf("%d",&chon);
		
		switch (chon) {
			case 1: {
				do {
					printf("Ban muon phat sinh bao nhieu phan tu: ");
					scanf("%d", &n);
				}while (n<=0);
				sinhmang(a,n);
				break;
			}
			
			case 2: {
				themdau(a,n,x);
				break;
			}
			
			case 3: {
				themcuoi(a,n,x);
				break;
			}
			
			case 4: {
				themvt(a,n,x, vt);
				break;
			}
			
			case 5: {
				xoadau(a,n);
				break;
			}
			
			case 6: {
				xoacuoi(a,n);
				break;
			}
			
			case 7: {
				printf("Nhap vi tri ban muon xoa: ");
				scanf("%d",&vt);
				xoavt(a,n,vt);
				break;
			}
			
			case 8: {
				xoax(a,n,x);
				break;
			}
			
			case 9: {
				xoamax(a,n);
				break;
			}
			
			case 10: {
				sapxep(a,n);
				
				break;
			}
			printf("\n");
			
			case 0:
				printf("Ending program.....");
		} 
	}while (chon!=0);
}
