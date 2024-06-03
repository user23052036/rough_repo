#include<bits/stdc++.h>
using namespace std;

struct node      //structure
{
    string name;
    int age;
    string occupation;
    char gender;

    node(string name, int age, string occupation, char gender) //constructor
    {
        this->name = name;
        this->age = age;
        this->occupation = occupation;
        this->gender = gender;
    }
};

int main()
{
    node n1("souvik",20,"student",'M');

    array<int,5>arr = {1,2,3,4,5};

    for(auto it = arr.begin(); it != arr.end(); it++) //forward order
        cout<<*it<<" ";

    for(auto it = arr.rbegin(); it != arr.rend(); it++)  //reverse  order automatically the name (it) is converted to integer pointer
        cout<<*it<<" ";

    for(auto it = arr.end()-1; it >= arr.begin(); it--)  //reverse order
        cout<<*it<<" ";
    
}