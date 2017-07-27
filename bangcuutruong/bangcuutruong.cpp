#include <stdio.h>

int main() 
{
   int i,j;
   printf("In bang cuu chuong:\n");
   for(i = 1; i <= 9; i++) 
   {
      for(j = 1; j <= 9; j++) 
	  {
         printf(" %2d", i*j);
      }

      printf("\n");
   }

   return 0;
}
