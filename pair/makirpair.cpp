#include<iostream>
using namespace std;
void makepair(int a[],int b[],int n){
       pair<int,int>pa[n];
       for(int i=0;i<n;i++){
           pa[i]={a[i],b[i]};
       }
       for(int i=0;i<n;i++){
        cout<<pa[i].first<<" "<<pa[i].second<<" "<<endl;
       }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
   makepair(a,b,n);
    return 0;
}