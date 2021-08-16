#include<stdio.h>

int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a,b,c;
    a = 1 , b = 2, c = 3 ;
    swap(&a,&b);
    swap(&a,&c);
    printf("%d %d %d",a,b,c);
}