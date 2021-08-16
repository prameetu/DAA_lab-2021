#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int A[], int n)
{
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (A[j] < A[k])
                k = j;
        }
        swap(&A[i], &A[k]);
    }
}

int main()
{
    int n;
    time_t strt,end;
    double t;
    scanf("%d",&n);
    int k = n;
    int best[n],avg[n],worst[n];
    for(int i=0;i<n;i++){
        best[i] = i+1;
        avg[i] = rand()%1000;
        worst[i] = k;
        k--;
    }
    strt = clock();
    selectionSort(best,n);
    end = clock();
    t = end - strt;
    printf("Time Complexity for best case : %f\n",(t/CLOCKS_PER_SEC));
    
    strt = clock();
    selectionSort(avg,n);
    end = clock();
    t = end - strt;
    printf("Time Complexity for avg case: %f\n",(t/CLOCKS_PER_SEC));
    
    strt = clock();
    selectionSort(worst,n);
    end = clock();
    t = end - strt;
    printf("Time Complexity for worst case : %f\n",(t/CLOCKS_PER_SEC));
    



    for(int i=0;i<n;i++){
        printf("%d ",avg[i]);
    }
    return 0;
}