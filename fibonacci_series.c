#include<stdio.h>

int main()
{
    int a=1,b=1,c,limit;
    
    printf("Enter the number of fibonacci series:--->");
    scanf("%d",&limit);
    
    if(limit > 2)
    {
        printf("%d\n",a);
        printf("%d\n",b);
        for(int i=0; i<limit; i++)
        {
            c = a+b;
            printf("%d \n",c);
            a = b;
            b = c;
        }
    }
    
    else if(limit == 2)
        printf("%d \n %d",a,b);
    else if(limit == 1)
        printf("%d \n",a);
    else
        printf("Enter a valid input \n");
        
    return 0;
}
