#include<iostream>
using namespace std;

void switch_lol(string*,string*);
int main()
{
    cout<<"Enter two string:---> ";
    string str1,str2;
    getline(cin>>ws,str1);
    getline(cin>>ws,str2);

    cout<<"first string:---> "<<str1<<endl;
    cout<<"second string:--->"<<str2<<"\n\n";

    switch_lol(str1,str2);

    cout<<"after switching we have:---> ";
    cout<<"first string:---> "<<str1<<endl;
    cout<<"second string:--->"<<str2<<endl;
    return 0;
}

void switch_lol(string &str1, string &str2)
{
    string temp=str1;
    str1=str2;
    str2=temp;
}