#include<stdio.h>
int main()
{
    int arr[50],i,N,k;
    printf("Nhap so phan tu cho chuoi : ");
    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {
        printf("Nhap vao phan tu thu %d cho chuoi : ",i+1);
        scanf("%d", &arr[i]);
    }

    for(k = 0; k < N-1; k++)
    {
        int imax = arr[k];
        for(i = k; i <= N-1; i++)
        {
            if(imax > arr[i])
            {
                imax = arr[i];
                arr[i] = arr[k];
                arr[k] = imax;
            }
        }
    }
    for(i = 0; i < N; i++)
    {
        printf ("%d\n", arr[i]);
    }
}
