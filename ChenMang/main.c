#include<stdio.h>
int main()
{
	/*
	*cap thua ra bo nho cho source( o day la 100 ) de co the dich cac phan tu cua source ra
	*
	*/
    int source[100] = {1, 2, 3, 4, 5, 6};
    int dest[] = {10, 20, 30};
    int N = 6;  // sizeof(source)/sizeof(source[0]);
    int M = sizeof(dest)/sizeof(dest)[0];
    int k;

    scanf("%d",&k);
    for (int i=(N-1); i>=k; i--)
    {
			source[i+M]=source[i];
    }

    for (int i = 0; i<=M; i++)
    {
        source[i+k]=dest[i];
        //dest[i]=source[i+k];
    }
    for (int i = 0; i < M + N; i++)
    {
        printf("%d\n",source[i]);
    }

}
