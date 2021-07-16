#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   pair<int,float>pairvalue;
   pairvalue={2,9.6};
   pair<int,float> &p1=pairvalue;//without reference operator pair value will not change.if u want to change
   //then use& like pair<int,float> &p1=pairvalue & reference
   p1.first=3;
   cout<<"the pair value is "<<pairvalue.first<<endl<<pairvalue.second<<endl;
   //why we use pair
   pair<int,int>pair_array[3];
   pair_array[0]={2,9};
   pair_array[1]={9,6};
   pair_array[2]={8,5};
   //swap(pair_array[0],pair_array[2]);
   for(int i=0;i<3;i++){
   	 cout<<pair_array[i].first<<" "<<pair_array[i].second<<" "<<endl;
   }
   
   
   return 0;	
}
