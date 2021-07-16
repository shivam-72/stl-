#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    vector<int>v{10,5,15,20};
    v.pop_back();
    v.front();
    for(auto x:v)
    cout<<x<<" ";
    
    return 0;
}