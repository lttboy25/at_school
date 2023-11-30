#include <stdio.h>
 void xep(int c[], int n) {
 	int temp;
	 for (int i = 0; i<n; i++) {
 		for (int j = i+1; j<n; j++) {
 			if (c[i]>c[j]) {
 				temp = c[i];
 				c[i] = c[j];
 				c[j] = temp;
			 }
		 }
	 }
 }
 void tronmang(int a[], int b[], int c[], int n, int m, int &l) {
 	for (int i = 0; i<n; i++) {
 		c[l] = a[i];
 		l++;
	 }
	 
	 for (int i = 0; i<m; i++) {
	 	c[l] = b[i];
 		l++;
	 }
	 xep(c,l);
 }
 
 int main() {
 	int n=2, m =3,l;
 	int a[] = {2,5};
 	int b[] = {3,4,1};
 	int c[1];
 	tronmang(a,b,c,n,m,l);
 	
	 for (int i = 0; i<l; i++) {
 		printf("%d ", c[i]);
	 }
 }
