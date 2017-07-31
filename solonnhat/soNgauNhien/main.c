#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,k,N;
   int ngaunhien[1000];
   printf("Nhap so phan tu cua mang:");
   scanf("%d",&N);
   for (i=0;i<N;i++)
    {
	 	ngaunhien[i] = (rand() %1000);
    }


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

    for(i=0;i<N;i++)
    {
        printf("%d\n",ngaunhien[i]);
    }


}
