#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> getsmall(int a[], int n,int k)
{
    vector<int> v;
    for(int i=0;i<n;i++){
        if (a[i]< k){
            v.push_back(a[i]);
        }
    }
    return v;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    vector<int>res=getsmall(arr,n,18);
    for(auto x: res)
    cout<<x<<" ";

    return 0;
}