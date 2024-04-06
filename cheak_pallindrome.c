#include<stdio.h>
#include<string.h>

int cheak_pallindrom(char*,int);
int main()
{
    char str[20];
    int length;
    printf("ENter tour string:--->");
    scanf("%s",str);
    
    length = strlen(str);
    
    if(cheak_pallindrom(str,length) == 1)
        printf("Pallindrome\n");
    else
        printf("Not pallindrome\n");
    return 0;
}

int cheak_pallindrom(char *str, int length)
{
    int limit;
    if(length%2 ==0)
        limit = length/2;
    else
        limit = (length-1)/2;
    
    for(int i=0; i<limit; i++)
    {
        if(str[i] == str[length-1-i])
            continue;
        else
            return 0;
    }
    return 1;
}