#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void pass_func(int*, int);
void out_func(int*, int);

int main()
{
    int length;
    
    printf("Enter how many numbers do you want to enter:--->");
    scanf("%d",&length);
    
    int *ptr = malloc(length*sizeof(int));
    pass_func(ptr,length);
    out_func(ptr,length);
    
    free(ptr);
    
    return 0;
}

void pass_func(int *ptr, int length)
{
    int num=1;
    
    for(int i=0;i<length;i++)
    {
        ptr[i] = num;
        num++;
    }
}

void out_func(int *ptr, int length)
{
    int i=0,b;
    
    b = sqrt(length);
    
    for(i; i<length; i=i+b)
    {
        for(int j=0; j<b; j++)
            printf("%d  ",ptr[i+j]);
        printf("\n");
    }
}