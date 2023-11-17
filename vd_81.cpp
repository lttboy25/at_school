#include <stdio.h>
#define max 100


void nhapmang(int a[], int n) {
	for (int i = 0; i<n; i++) {
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d",&a[i]);
	}
}

void xuatmang(int a[], int n) {
	printf("So thu %d la: ");
	for (int i = 0; i<n; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
}

void lietkesochan(int a[], int n) {
	printf("So chan la: ");
	for (int i = 0; i<n; i++) {
		if (a[i]%2==0) {
			
			printf("%d ",a[i]);
		}
	}	
	printf("\n");
}

void lietkesole(int a[], int n) {
	printf("So le la: ");
	for (int i = 0; i<n; i++) {
		if (a[i]%2!=0) {
			
			printf("%d ",a[i]);
		}
	}
	printf("\n");	
}

void tongsole(int a[], int n) {
	int tong=0;
	printf("Tong so le la: ");
	for (int i = 0; i<n; i++) {
		if (a[i]%2!=0) 
		{
			tong+=a[i];
		}
	}
	printf("%d",tong);
	printf("\n");	
}

int ktrsnt(int n) {
	if (n<=1) {
		return 0;
	}
	for (int i = 2; i<=n/2; i++) {
		if (n%i==0) {
			return 0;
		}
	}
	return 1;
}
void lietkesnt(int a[], int n) {
	printf("So nguyen to la: ");
	
	for (int i = 0; i<n; i++) {
		if (ktrsnt(a[i])) {
			printf("%d ",a[i]);
		}
	}
	printf("\n");
}

void lonhon(int a[],int n,int x) {
	
	printf("So lon hon %d la: ",x);
	
	for (int i = 0; i<n; i++) {
		if (a[i]>x) {
			printf("%d ",a[i]);
		}
	}
	printf("\n");
}

int demsnt(int a[], int n) {
	int d=0;
	
	for (int i =0; i<n; i++) {
		if (ktrsnt(a[i])) 
		{
			d++;
		}
	}
	return d;
}

void nhohon(int a[],int n,int x) {
	
	printf("So nho hon %d la: ",x);
	
	for (int i = 0; i<n; i++) {
		if (a[i]<x) {
			printf("%d ",a[i]);
		}
	}
	printf("\n");
}

void solonnhat(int a[], int n) {
	int so = a[0];
	for (int i = 0; i<n; i++) 
	{
		if (a[i]>so) 
		{
			so = a[i];
		}
	}
	printf("So lon nhat la: %d\n",so);
}

int timvitri(int a[], int n,int x) {
	for (int i = 0; i<n; i++) {
		if (a[i]==x) 
		{
			return i;
		}
	}
	return -1;
}

void giatriam(int a[], int n) {
	printf("Gia tri am trong mang: ");
	for (int i = 0; i<n; i++) {
		if (a[i]<0) {
			printf("%d ",a[i]);
		}
	}
	printf("\n");
}

float tongsoam(int a[],int n) {
	int tong = 0, d = 0;
	for (int i = 0; i<n; i++) {
		if (a[i] < 0 ) 
		{
			tong+=a[i];
			d++;
		}
	}
	return (float) tong/d;
}

int HoanVi(int &a, int &b)  {
	int temp;
	temp = a;
	a=b;
	b = temp;
	return a,b;
}
void SapTang(int a[],int n) {
	for (int i = 0; i<n-1; i++) 
	{
		for (int j=i+1; j<n; j++)
		{
			if(a[i]>a[j]) {
				printf("%d",HoanVi(a[i],a[j]));
			}
		}
	}
}



int main() {
	int a[max], n=5, x;
	printf("Nhap kich thuoc mang: ");
	
	nhapmang(a,n);
	printf("\nGia tri cua mang da nhap la:\n");
	xuatmang(a,n);
	
	lietkesochan(a,n);
	
	lietkesole(a,n);
	tongsole(a,  n);
	
	giatriam(a,n);
	
	solonnhat(a,n);
	
	printf("So luong so nguyen to la: %d\n",demsnt(a,n));
	lietkesnt(a,n);
	
	printf("Trung binh cac gia tri am trong mang la: %.2f",tongsoam(a,n));
	
	printf("Nhap x: ");
	scanf("%d",&x);
	lonhon(a,n,x);
	nhohon(a,n,x);

	printf ("Nhap vi tri x: ");
	scanf("%d",&x);
	timvitri(a,n,x);
	if (timvitri(a,n,x)) {
		printf("Vi tri x la %d\n",timvitri(a,n,x));
	}
	
	
	
	return 0;
}
