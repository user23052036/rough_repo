#include<stdio.h>
#include<string.h>

void rev_str(char*,int);
int main()
{
    char str[50];
    int length;
    printf("ENter your string:--->");
    scanf("%[^\n]s",str);

    length = strlen(str);
    rev_str(str,length);
    printf("After reversing we have:--->%s",str);
    return 0;
}

void rev_str(char *str, int length)
{
    int limit;                
    if(length%2 == 0)                // finding whether length of string even or odd
        limit = length/2;
    else
        limit = (length-1)/2;
    
    for(int i=0; i<limit; i++)           // interchanging first and last element
    {
        str[i] = str[i] + str[length-1-i];
        str[length-1-i] = str[i] - str[length-1-i];
        str[i] = str[i] - str[length-1-i];
    }
}