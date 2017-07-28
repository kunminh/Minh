#include<stdio.h>
int main()
{
	int arr[5],i,N;
	printf("Nhap so phan tu cho chuoi : ");
	scanf("%d",&N);

	for(i=0;i<N;i++)
	{
		printf("Nhap vao phan tu thu %d cho chuoi : ",i+1);
		scanf("%d",&arr[i]);
	}
	int imax=arr[0];
	int imin=arr[N-1];
	for(i=1;i<=N-1;i++)
	{
        if(imax<arr[i])
			{
				imax=arr[i];
				arr[i]=arr[0];
				arr[0]=imax;
			}
	for(i=1;i<N-1;i++)
		if(imin>arr[i])
		    {
			 	imin=arr[i];
				arr[i]=arr[N-1];
				arr[N-1]=imin;
			}

	}
	for(i=0;i<N;i++){
 	printf ("%d",arr[i]);
}
}

