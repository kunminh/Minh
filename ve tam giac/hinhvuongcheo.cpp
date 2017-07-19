#include <stdio.h>
//Ve hinh vuong co gach cheo
void vehinhvuongcheo(int a) {
	int i, j ;
	for(i=1;i<=a;i++){
	  for(j=1;j<=a;j++)
         if(i==1||j==1||i==a||j==a||i==j||(i+j)==(a+1))
           printf(" * ");
	     else
		   printf("   ");  
	  printf("\n\n");    
   }
}

int  main() {
   printf("nhap do dai canh cua hinh vuong, go so < 5 de thoat\n");
   int a;
   while (true) {
   		scanf("%d",&a);
   		if (a < 5) {
   		 	return 0;
		}
  		vehinhvuongcheo(a);
   }
   
}


