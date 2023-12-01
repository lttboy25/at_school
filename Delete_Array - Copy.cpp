#include <stdio.h>
#define MAX 100
void input_arr(int a[], int &n);
void output_arr(int a[], int n);
void delete_first(int a[], int n);
void delete_last(int a[], int n);
void delete_point(int a[], int n);

int main() {
	int a[MAX]; int n;
	input_arr(a,n);
	delete_point(a,n);
	
}

void input_arr(int a[], int &n) {
	printf("Input the size of array = ");
	scanf("%d",&n);
	printf("Input value of array:\n");
	for (int i = 0; i<n ; i++) {
		printf("Value of  a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}

void output_arr(int a[], int n) {
	printf("Output array:\n");
	for (int i = 0; i<n; i++) {
		printf(" %d ",a[i]);
	}
}

void delete_first(int a[], int n) {
	for (int i = 0; i<n; i++) {
		a[i]=a[i+1];
	}
	n--;
	output_arr(a,n);
}

void delete_last(int a[], int n) {
	n--;
	output_arr(a,n);
}

void delete_point(int a[], int n) {
	int point;
	printf("Input point of delete = ");
	scanf("%d",&point);
	for (int i = point; i<n; i++) {
		a[i] = a[i+1];
	}
	n--;
	output_arr(a,n);
}
