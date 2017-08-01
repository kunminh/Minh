#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

void xepBatKi (int ngaunhien [1000], int N)
{
    for(int k = 0; k < N-1; k++)
    {
        int imax = ngaunhien[k];
        for(int i = k; i <= N-1; i++)
        {
            if(imax > ngaunhien[i])
            {
                imax = ngaunhien[i];
                ngaunhien[i] = ngaunhien[k];
                ngaunhien[k] = imax;
            }
        }
    }
}
int main()
{
    //nhap so phan tu cua mang
    int i,N;
    int ngaunhien[10000];
    printf("Nhap so phan tu cua mang:");
    scanf("%d",&N);
    for (i=0; i<N; i++)
    {
        ngaunhien[i] = (rand() %1000);
    }


    struct timeval t1, t2;
    double elapsedTime;

    // start timer
    gettimeofday(&t1, NULL);
    //sap xep mang
    xepBatKi(ngaunhien,N);

    // stop timer
    gettimeofday(&t2, NULL);

    // compute and print the elapsed time in millisec
    elapsedTime = (t2.tv_sec - t1.tv_sec) * 1000.0;      // sec to ms
    elapsedTime += (t2.tv_usec - t1.tv_usec) / 1000.0;   // us to ms

    //in ket qua
    for(i=0; i<N; i++)
    {
        printf("%d\n",ngaunhien[i]);
    }

    printf("Thoi gian chay %f", elapsedTime );

    return 0;
}
