#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s[255];
	printf("Nhap vao mot chuoi\n");
	gets(s);
	int i;
	for (i=0; s[i]!=0; i++);
	
	printf("Length of string is %d", i);
	return 0;
}
