#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //beloe this time complexity is o(1).
    list<int> l1 = {23, 55, 98};
    auto it = l1.begin();
    it++;
    l1.insert(it, 30);
    l1.insert(it, 2, 9);
    l1.erase(it);  // it takes iterator and gives iterator to next which is deleted.
    l1.remove(55); //it remove occurence of element present in a list
    for (list<int>::iterator it = l1.begin(); it != l1.end(); it++)
        cout << *it << " ";

    cout << l1.front();
    cout << l1.back();
    cout << l1.size() << endl;
    list<int> l2 = {95, 16, 90};
    list<int> l3 = {13, 18, 30};
    l2.merge(l3); //it will merge l3 to l2 and make l3 empty.(it also sorts if one is sorted)
    for (auto x : l2)
        cout << x << " " << endl;
    list<int> l4 = {10, 20, 20, 30, 40, 40, 50};
    //all 3 operation below time complexibity is o(n).
    l4.unique();  //it removes same consecutive elements.
    l4.reverse(); //it reverse doubly list list.
    l4.sort();    //sort the list
    for (auto x : l4)
        cout << x << " ";

    return 0;
}