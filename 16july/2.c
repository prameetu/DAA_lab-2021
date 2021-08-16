#include<stdio.h>

int non_zero(int mat[3][3])
{
    int cnt = 0; 
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(mat[i][j] != 0)
                cnt++;
        }
    }

    return cnt;
}

int sum_above_diag(int mat[3][3])
{
    int sum = 0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j > i)
                sum = sum + mat[i][j];            
        }
    }
    return sum;
}

int elements_below_diag(int mat[3][3])
{
    printf("\n\nThe elemnets below diagonal are:  ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(j < i)
               printf("%d ",mat[i][j]);
              
        }
    }
}

int product_of_diag(int mat[3][3]){
    int product = 1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(j == i){
               product = product*mat[i][j];
            }  
        }
    }
    return product;
}

int main()
{
    int mat[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    printf("The number of non-zero elements in matrix are : %d ", non_zero(mat));
    printf("\n\n The sum above the diagonal is %d",sum_above_diag(mat));
    elements_below_diag(mat);
    printf("\n\nThe product of diagonal elemnets are: %d",product_of_diag(mat));
}