//rbegin and rend(with r begin traveserse from last)
//c begin and cend(c stands for constant)
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10, 5, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    for( auto it=v.begin(); it!=v.end(); it++){
        cout<<(*it)<<" ";
    }
    return 0;
}