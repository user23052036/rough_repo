#include<bits/stdc++.h>
using namespace std;

int main()
{
    //stack                                 LIFO last in first out
    stack<int>st;
    st.push(2);
    st.emplace(4);
    st.emplace(3);
    st.emplace(1);

    st.top();      //prints 1
    st.pop();
    st.top();      //prints 3
    if(!st.empty())
        cout<<st.top()<<endl;

    if(!st.empty())                         //deletes all elements in statck
        st.pop();



    //queue                                 FIFO       first in first out
    queue<int>q;
    q.push(2);
    q.emplace(4);
    q.emplace(3);
    q.emplace(1);   

    q.front();   //2
    q.pop();
    q.front();   //4

    if(!q.empty())          //deletes all the elements in queue
        q.pop();



    //priority queue                     stores evrting in decending order O(LOG N)
    priority_queue<int>pq;
    pq.push(2);
    pq.emplace(4);
    pq.emplace(3);
    pq.emplace(1);                           //4,3,2,1

    priority_queue<list<int,int>>pql;
    pql.push({1,5});
    pql.push({1,6});
    pql.push({1,7});

    //we can store elements in priority queue in ascending order
    priority_queue<int>pq_as;
    pq_as.push(-2);
    pq_as.emplace(-4);
    pq_as.emplace(-3);
    pq_as.emplace(-1);                       // -1,-2,-3,-4
    cout<<-1*pq_as.top()<<endl;




    //minimum ppriority queue (for ascending storing of elements without negation)
    priority_queue<int, vector<int>, greater<int>>pq_min;   // ascending of integers
    priority_queue<pair<string,int>, vector<pair<string,int>>, greater<pair<string,int>>>pr_min_pair; //ascending of pair
    
    
    //dequeue
    deque<int>dq;
    list<int>ls;   

    // push_front()
    // push_back()
    // pop_front()
    // pop_back()
    // begin,end,qbegin,qend
    // size
    // clear
    // empty
    // at
    //remove operation only in list not in deque
    return 0;
} 