#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void Bubble_sort(int A[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(A[j] > A[j+1])
                swap(&A[j],&A[j+1]);
        }
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
    Bubble_sort(best,n);
    end = clock();
    t = end - strt;
    printf("Time Complexity for best case : %f\n",(t/CLOCKS_PER_SEC));
    
    strt = clock();
    Bubble_sort(avg,n);
    end = clock();
    t = end - strt;
    printf("Time Complexity for avg case: %f\n",(t/CLOCKS_PER_SEC));
    
    strt = clock();
    Bubble_sort(worst,n);
    end = clock();
    t = end - strt;
    printf("Time Complexity for worst case : %f\n",(t/CLOCKS_PER_SEC));
    



    for(int i=0;i<n;i++){
        printf("%d ",avg[i]);
    }
    return 0;
}