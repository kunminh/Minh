#include<stdio.h>

int main () {
	int i;
	for (i = 0; i <= 100; i++) {
		if( (i < 50 || i > 70 ) && i%2 == 0) {
			printf("%d\n", i);
		}
}	
}
