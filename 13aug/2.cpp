#include<bits/stdc++.h>

void min_max(int arr[],int l,int h,int &min,int &max)
{
    if(l==h)
    {
        if(max < arr[l])
            max = arr[l];
        if(min > arr[h])
            min = arr[h];
        
        return;
    }

    if(h-l==1)
    {
        if(arr[l] < arr[h])
        {
            if(min > arr[l]){
                min = arr[l];
            }

            if(arr[h] > max)
                max = arr[h];   
        }
        else{
            if(min > arr[h])
                min = arr[h];
            if(max < arr[l]);
                max = arr[l];
        }
        return;
    }

    int mid = (l+h)/2;
    min_max(arr,l,mid,min,max);
    min_max(arr,mid+1,h,min,max);

}

int main(){
    int arr[10];
    for(int i=0;i<10;i++)
    {
        arr[i] = rand();
    }

    int min = INT_MAX;
    int max = INT_MIN;

    min_max(arr,0,9,min,max);

    printf("The minimum and maximum element are : %d   %d ",min,max);
}
