#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Tinh giai thua N! = 1*2*3*4....*N */

int main(int argc, char *argv[]) {
	int i, result, N;
	printf("Nhap vao mot so N tu 1 den 10\n");
	scanf("%d", &N);
	if (N > 10 || N == 0) {
		printf("%d qua to hoac qua nho", N);
		return 0;
	}
	result = 1;
	for (i=1; i <= N; i++) {
		result = result * i;
	}
	
	printf("N giai thua = %d", result);
	
	return 0;
}
