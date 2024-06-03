#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr={2,5,2,1,5,8,12,3};


    //set
    set<int> st;
    for(int i=0; i<arr.size(); i++)
        st.insert(i);
    st.erase(st.begin());                     //deletes the first element in the set(the smallest one)
    st.erase(st.begin(), next(st.begin(),2));  //new concept doubt!!!!!!!!!!!!!!!!!!!!

    set<int>st1={1,3,5,7,9,13};
    st1.insert(12);
    st1.emplace(13);                            ///same as inset faster

    set<int>st2(st1.begin(),st1.end());
    auto it = st2.find(3);                     // if not found returns st.end()

    st.erase(st.begin(),st.end());              //deletes the entire st set



    //unordered set
    unordered_set<int> ust={1,5,3,4,7,8,3,3,5,7,3,2,43};
    //all unique elements but no shorting to ascending order
    ust.insert(1);
    ust.emplace(99);



    //multiset
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(4);
    ms.emplace(2); //  ms={1,1,2,4}
    ms.count(1);//how many iteration
    ms.erase(ms.begin(),ms.end());
    return 0;
}