#include <stdio.h>
#include <stdlib.h>

int main()
{
   float average;
   int  arr[50],source[50],sum=0,i,N;

	printf("Nhap so phan tu cho chuoi : ");
	scanf("%d",&N);

	for(i=0;i<N;i++)
	{
		printf("Nhap vao phan tu thu %d cho chuoi : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<N;i++)
	{
		sum=sum+arr[i];
	}
	average= sum/N;
	for (i=0;i<N;i++)
	{
		if (arr[i]<=average)
		{
			source[i]=average-arr[i];
		}
		else
		{
			source[i]=arr[i]-average;
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%d",source[i]);
	}

}
