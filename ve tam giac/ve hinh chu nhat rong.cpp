#include <stdio.h>
int  main() {
   int a, b, i, j ;	
   printf("nhap do dai hai canh cua hinh chu nhat");
   scanf("%d%d",&a,&b); 
   for(i=1;i<=a;i++){
	  for(j=1;j<=b;j++)
         if(i==1||j==1||i==a||j==b)
         printf(" * ");
	     else
		printf("   ");  
	  printf("\n\n");  
   
}
}
