#include<bits/stdc++.h>
using namespace std;

template<typename T>
T maxi_loco(T x, T y)
{
    return((x>y)?x:y);
}

int main()
{
    char ch1='a',ch2='b';
    int num1=9, num2=3;
    string str1="sonu", str2="sona";
    double db1=5.6, db2=5.6;

    cout<<maxi_loco(ch1,ch2)<<"\t\t";
    cout<<maxi_loco(num1,num2)<<"\t\t";
    cout<<maxi_loco(str1,str2)<<"\t\t";
    cout<<maxi_loco(db1,db2)<<"\t\t";
    return 0;
}