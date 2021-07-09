#include<stdio.h>

int main() {

	int n, product = 1;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", (arr + i));
		product *= arr[i];
	}

	for (int i = 0; i < n - 1; i++) {
		printf("%d, ", product / arr[i]);
	}

	printf("%d\n", product / arr[n - 1]);
	
	return 0;
}
