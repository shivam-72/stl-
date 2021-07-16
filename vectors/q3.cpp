#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void indx(int arr[],int n){
 vector<pair<int,int>>v;
 for(int i=0;i<n;i++){
     v.push_back({arr[i],i});
 }
 sort(v.begin(),v.end(),greater<pair<int,int>>());
 for(int i=0;i<n;i++){
   cout<<v[i].first<<" "<<v[i].second<<endl;
 }
}

int main(){
    int a[]={40,20,50,80};
    indx(a,4);
   return 0;
}