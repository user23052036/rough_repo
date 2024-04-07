#include<stdio.h>

int main()
{
    int a,b,count=0,prime;
    printf("ENter two numbers:--->");
    scanf("%d%d",&a,&b);

    printf("Following are the prime numbers between %d and %d\n",a,b);
    for(int i=a; i<=b; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(i%j == 0)
            {
                prime = j;
                count++;
            }
        }
        if(count == 2)
            printf("%d\n",prime);
        count=0;
    }
    return 0;
}