#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr(4,9);
    arr.push_back(2);
    arr.emplace_back(92);//same as push back but little fater
    arr.push_back(3);
    arr.push_back(75);
    arr.pop_back();

    for(auto member: arr)
        cout<<member<<" ";

    vector<int>new_arr(arr.begin(),arr.begin()+2);// first 2 elements from arr copied to new_arr
    
    
                                                        //declaring a 2d vector
    vector<vector<int>>vec_2d(10,vector<int>(20,0));     //vector of vectors
    vec_2d.push_back(vector<int>(6,0));                  //pushing an entire row of 6 elements 0
    vec_2d[5].push_back(4);                             //adding an element 4 in 1d vector(5th index of 2d vector)

    for(auto vctr: vec_2d)
    {
        for(auto member:vctr)
            cout<<member<<" ";
        cout<<endl;
    }

   vector<int> arr7[7];        // array of vectors of size 7 each
    arr7[0].push_back(7);       //each index of array has a vector
    arr7[1].push_back(4);      //dynamic along only columns not rows
    arr7[2].push_back(2);
    arr7[3].push_back(8);
    arr7[4].push_back(9);

    for(auto vctr: arr7)
    {
        for(auto member:vctr)
        cout<<member<<" ";
        cout<<endl;
    } 

    //3d vec tor 5*10*15
    vector<vector<int>>arr8(10,vector<int>(15,0));//2d vector
    vector<vector<vector<int>>>vec_3d(5,vector<vector<int>>(10,vector<int>(15,0)));//3d vector
    return 0;
}