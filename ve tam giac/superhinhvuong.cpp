#include<stdio.h>
int main(){
	int a,b,c,d,e,i,j;//,k,l,m,n; 
	printf("Chon hinh ma ban muon ve\n");
	printf("1> hinh vuong dac\n");
	printf("2> hinh vuong rong\n");
	printf("3> hinh vuong cheo\n");
	printf("4> hinh vuong cong\n");
	//printf("5> hinh vuong thoi\n");
	scanf("%d",&a);
	switch(a){
		case 1: printf("Nhap do dai canh hinh vuong: ");
			 	scanf("%d",&b);
		   		for (i=1;i<=b;i++)
				{
		  		 for (j=1;j<=b;j++)
				 printf(" * ");
				 printf("\n\n");
			    }
			    break;
		case 2: printf("nhap do dai canh cua hinh vuong   ");
			 	scanf("%d",&c);
			 	if(c%2 == 0 || c < 5) {
				printf("Khong the in hinh.");
				}
				else{ 
  				 for(i=1;i<=c;i++){
	 			  for(j=1;j<=c;j++)
         		  if(i==1||j==1||i==c||j==c) {
         		  printf(" * ");
		 		  }     
	     		  else {
	     		  printf("   ");  
  				  }		
	 			   printf("\n\n");
				   }
    			   }
				break;
		case 3: printf("nhap do dai canh cua hinh vuong");
   			 	scanf("%d",&d); 
   			 		if(d%2 == 0 || d < 5) {
					printf("Khong the in hinh.");
					}
					else{
  				 for(i=1;i<=d;i++){
	 			  for(j=1;j<=d;j++)
        		   if(i==1||j==1||i==d||j==d||i==j||(i+j)==(d+1)) {
         		   	printf(" * ");
		 			}     
	     			else {
 					printf("   ");  
		 			}		
	  				printf("\n\n");   
	 				}
			   		}
				break;
		case 4: printf("nhap do dai canh cua hinh vuong");
			 	scanf("%d", &e);
					if(e%2 == 0 || e < 5) {
					printf("Khong the in hinh.");
					}
					else
					{
					for(int col = 1; col <= e; col++)
					{
					for (int row = 1; row <= e ; row++)
					if(col == 1 || col == e || row == 1 || row == e || col == (e+1)/2 || row == (e+1)/2) {
					printf(" * ");
					}
					else {
					printf("   ");
					} printf("\n\n");
					}
					}
				break;				 		   	    
		}
}
