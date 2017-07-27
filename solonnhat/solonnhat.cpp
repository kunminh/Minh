#include<stdio.h>
int main()
{
	int source[255],i,a,max;
	printf("Nhap so phan tu cua chuoi:");
	scanf("%d",&a);
	for (i=0;i<a;i++)
	{
		printf("Nhap phan tu thu %d cua chuoi:",i+1);
		scanf("%d",&source[i]);
	}
	if (a== 1)
	{
		printf("So lon nhat la %d",&source[0]);
	}
	else
	{
		if (source[0]>source[1])
		{
			source[0]==max;
		}
		else
		{
			source[1]==max;
		}
	}
}
