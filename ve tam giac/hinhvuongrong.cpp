#include <stdio.h>
int  main() {
   int a , i, j ;	
   printf("nhap do dai canh cua hinh vuong   ");
   scanf("%d",&a); 
   for(i=1;i<=a;i++){
	  for(j=1;j<=a;j++)
         if(i==1||j==1||i==a||j==a) {
         	printf(" * ");
		 }     
	     else {
	     	printf("   ");  
		 }		
	  printf("\n\n");   
    }
}

