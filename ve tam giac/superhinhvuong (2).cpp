#include<stdio.h>
int main(){
	int a,b,c,d,e,f,i,j;//,k,l,m,n; 
	printf("Chon hinh ma ban muon ve\n");
	printf("1> hinh vuong dac\n");
	printf("2> hinh vuong rong\n");
	printf("3> hinh vuong cheo\n");
	printf("4> hinh vuong cong\n");
	printf("5> hinh vuong thoi\n");
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
		case 2: printf("nhap do dai canh cua hinh vuong :  ");
			 	scanf("%d",&c);
			 	if( c < 3) {
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
		case 3: printf("nhap do dai canh cua hinh vuong: ");
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
		case 4: printf("nhap do dai canh cua hinh vuong: ");
			 	scanf("%d", &e);
					if(e%2 == 0 || e < 5) {
					printf("Khong the in hinh.");
					}
					else
					{
					for(int i = 1; i <= e; i++)
					{
					for (int j = 1; j <= e ; j++)
					if(i == 1 || i == e || j == 1 || j == e || i == (e+1)/2 || j == (e+1)/2) {
					printf(" * ");
					}
					else {
					printf("   ");
					} printf("\n\n");
					}
					}
				break;				 		   	    
		case 5:	printf("nhap do dai canh hinh vuong: ");
			 	scanf("%d",&f);
			 	for(i=1;i<=(f+1)/2;i++)
 			 	{
 				for(j=1;j<=f;j++)
 				if(i+j==(f+1)/2+1||j-i==(f+1)/2-1||j==1||j==f||i==1)
 				printf(" * ");
 				else
 				printf("   ");
				 printf("\n\n");
 				 }
 				 for(i=0;i<(f+1)/2;i++)
 				 {
 				for(j=0;j<f;j++){
 				if(j==0||i==(f+1)/2-1||(i+j)==f-1||j==f-1||i==j)
 				printf(" * ");
 				else
 				printf("   ");}
 				printf("\n\n");
 	}
 }
 }

