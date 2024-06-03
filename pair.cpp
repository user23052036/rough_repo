#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<string,int>pr = {"Souvik Mandal",11};               //pair
    cout<<pr.first<<'\n';                                   //-->"souviik mandal"

    pair<pair<int,char>,string>ppr = {{01,'M'},"erin"};      //pair of (pair,string)
    cout<<ppr.first.second<<'\n';                         //---> 'M'


    //we can not define a pair of unordered map
    vector<pair<int,int>>vec;
    set<pair<int,char>>spair;
    map<string,pair<int,int>>;
    return 0;
}