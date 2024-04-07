#include<stdio.h>

int main()
{
    int num,temp_num,count=1,sum=0;
    printf("Enter your number:--->");
    scanf("%d",&num);

    temp_num = num;
    while(temp_num%10 != 0)
    {
        temp_num = temp_num/10;
        count++;
    }
    temp_num = num;
    for(int i=0; i<count; i++)
    {
        sum =sum + pow(num%10,count);
        num = num/10;
    }
    if(temp_num == sum)
        printf("Armstrong number\n");
    else
        printf("not armstrong number\n");
    return 0;
}