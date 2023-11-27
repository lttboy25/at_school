int ArrMerge(int A[], int n1, int B[], int n2, int C[], int n3) {
	int index=0;
 	n3 = n1+n2;
	
	for (int i = 0; i<n1; i++) {
		C[index] = A[i];
		index++;
	}
	
	for (int j = 0; j<n2; j++) {
		C[index] = B[j];
		index++;
	}
	
		sort(C,n3);
		return 0;
}
