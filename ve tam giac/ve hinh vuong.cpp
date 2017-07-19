#include <stdio.h>
int  main() {
   int a, i, j ;	
   printf("nhap do dai hai canh cua hinh chu nhat");
   scanf("%d",&a); 
   for(i=1;i<=a;i++){
	  for(j=1;j<=a;j++)
         if(i==1||j==1||i==a||j==a||(i+j)%2==0)
         printf(" * ");
		 /*if((i+j)%2==0)
	      printf(" * ");*/
	     else
		printf("   ");  
	  printf("\n\n");  
   
}
}
