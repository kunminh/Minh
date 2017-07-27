#include<stdio.h>
int main()
{
	int source[50],i,a,x,y,z,min;
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
		  	    min=z;
			}
			else 
			{
				min=y;
			}
		}
		else
		{
			if (x>z)
			{
				min=z;
			}
			else
			{
				min=x;
			}
		}
		if(min>source[i])
		{
			/*doan nay minh khong biet viet code nhu the nao
			neu viet min=source[i] thi no khong thay duoc gia tri cua source[i] vao 3 bien x,y,z*/ 
		}
		
	}
	printf("%d%d%d",&x,&y,&z);
}
