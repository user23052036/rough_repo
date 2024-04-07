#include<stdio.h>
#include<stdlib.h>

int main()
{
    int row,col,sum=0;
    printf("Enter rows and col of matrix:--->");
    scanf("%d%d",&row,&col);

    int **arr = (int**)malloc(row*sizeof(int*));
    for(int i=0; i<row; i++)
        arr[i] = (int*)malloc(col*sizeof(int));
    
    printf("Enter the elements of the matrix:--->\n");
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            scanf("%d",&arr[i][j]);

    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            if(j>i)
                sum = sum + arr[i][j];
    
    printf("Sum of the upper triangular matrix is :--->%d",sum);
    for(int i=0; i<row; i++)
        free(arr[i]);
    free(arr);
    return 0;
}