#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int mycomp(pair<int,int>p1,pair<int,int>p2){
    return p1.second>p2.second;
}
 void srt(int a[],int b[],int n){
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++){
       p.push_back({a[i],b[i]});
    }
    sort(p.begin(),p.end(),mycomp);
   for(int i=0;i<n;i++){
     cout<<p[i].first<<" "<<p[i].second<<endl;
   }

}

int main(){
    int a[]={101,108,103,104};
    int b[]={70,80,40,90};

    srt(a,b,4);
    

    return 0;
}