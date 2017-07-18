#include <stdio.h>
 int main ()
 {
 	int a,c,b;
 	scanf("%d",&b);
 	for(a=1;a<=b;a++)
 	{
 		for(c=1;c<=a;c++)
 		printf("*");
 		printf("\n");
 	}
 
 	for(a=b-1;a>=1;a--)
 	{
 		for(c=a;c>=1;c--)
 		printf("*");
 		printf("\n");
 	}
 }
