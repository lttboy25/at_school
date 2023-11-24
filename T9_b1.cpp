#include <stdio.h>
#include <math.h>

void nhap(int a[], int n) {
	printf("Nhap so ");
	for (int i = 0; i<n; i++) 
	{
		scanf("%d",&a[i]);
		if (a[i]<=0||a[i]>100) {
			break;
		}
	}
}

void xuat(int a[], int n) {
	printf("Cac so da nhap la: ");
	for (int i =0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
}

float Tongtrungbinh(int a[], int n) {
	float sum; 
	for (int i = 0; i<n; i++) {
		sum= (float) sum + a[i];
	}
	return sum = sum/n;
}

int Tongbinhphuong(int a[] , int n) {
	int sum;
	for (int i = 0; i<n; i++) {
		sum += pow(a[i],2);
	}
	return sum;
}

float tinhPhuongSai(int a[], int n) {
    float mean = Tongtrungbinh(a, n);
    float phuongSai = 0;

    for (int i = 0; i < n; i++) {
        phuongSai += pow(a[i] - mean, 2);
    }
    phuongSai /= n;

    return phuongSai;
}

float Tinhdolechchuan(int a[], int n) {
	float mean = Tongtrungbinh(a, n);
    float dolechchuan = 0;

    for (int i = 0; i < n; i++) {
        dolechchuan += pow(a[i] - mean, 2);
    }
    dolechchuan = sqrt(dolechchuan/n);

    return dolechchuan;
}

int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int x[n];
	
	int chon;
	
	nhap(x,n);
	
	printf("Chon: ");
	do {
		scanf("%d",&chon);
		switch (chon) 
		{
			case 1:
				{
					xuat(x,n);
					break;
				}
				
			case 2:
				{
					printf("%.2f",Tongtrungbinh(x,n));
					break;
				}
				
			case 3: 
			{
			
				printf("%d",Tongbinhphuong(x,n));
				break;
			}
			
			case 4: 
			{
				
				printf("%d",tinhPhuongSai(x,n));
				break;
			}
			
			case 5:
			{
			
				printf("%d",Tinhdolechchuan(x,n));
				break;
			}
			
		}
	}while (chon<0||chon>6);
	
	
}
















