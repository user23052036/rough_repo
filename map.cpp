#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>mpp;
    mpp["souvik"]=11;
    mpp["sagnik"]=7;
    mpp["raj"]=5;
    mpp.emplace("raj",74);                      //key name(raj) will be overwritten
    mpp.emplace("deer",447);                    //efficient
    mpp.insert({"erwin",8});
    mpp.insert(make_pair("look_a_like",1));

    auto it = mpp.find("raj");                 //returns the pointer to the raj(key name)
    mpp.find("erwin");
    if(mpp.empty())                                 //return type bool
        cout<<"empty map"<<endl;


    for(auto it: mpp)
        cout<<it.first<<" "<<it.second<<endl;

    for(auto it=mpp.begin(); it!=mpp.end(); it++)     //same shit
        cout<<it->first<<" "<<it->second<<endl;
    
    mpp.clear();                                   //deletes the entire map


    //unordered map
    unordered_map<string,int>ump;            //no sorted and unique keys
    multimap<string,int>mmpp;               //sorted but not unique keys
    // {"hema",12}  and {"hema",23} is both stored in multimap.. multiple keys
    return 0;
}