#include<stdio.h>
int giaithua(int N)
{
	if(N<2) return 1;
	int result =1;
	for (int i=2; i<=N; i++)
	{
		result*=i;
	}
	return result;
}
int main()
{
	int N;
	while(1)
	{
		printf("nhap vao mot so");
		scanf("%d",&N);
		if (N<0) return 0;
		printf("%d!=%d\n",N, giaithua(N));
	}
	return 0;
}

