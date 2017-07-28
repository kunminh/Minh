#include<stdio.h>
int main()
{
	int source[50],i,a,x,y,z,t;
	printf("Nhap so phan tu cua chuoi:");
	scanf("%d",&a);
	for (i=0;i<a;i++)
	{
		printf("Nhap phan tu thu %d cua chuoi:",i+1);
		scanf("%d",&source[i]);
	}
	x=source[0];
	y=source[1];
	z=source[2];
	for (i=3;i<=a;i++)
	{
		if(x>y)
		{
			if(y>z)
			{
		  	    
			}
			else 
			{
				if(x>z)
				{
					t=z;
					z=y;
					y=t;
				}
				else
				{
					t=y;
					y=x;
					x=z;
					z=t;
				}
			}
		}
		else
		{
			if (x>z)
			{
			   t=y;
			   y=x;
			   x=t;	
			}
			else
			{
				if(y>z)
				{
				 	t=x;
					x=y;
					y=z;
					z=t; 	
				}
				else
				{
					t=x;
					x=z;
					z=t;
				}
			}
		}
		if(x>source[i])
		{
  		    x=source[i];
		}
		
	}
	printf("%d\n%d\n%d\n",x,y,z);
}
