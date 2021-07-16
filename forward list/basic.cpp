#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int> l{10, 20, 30, 40};
    l.push_front(40);
    l.pop_front();
    forward_list<int> l2;
    l2.assign(l.begin(), l.end());
    l.remove(20);
    for (auto x : l2)
    {
        cout << x << " " << endl;
    }
    forward_list<int> l3;
    l3.assign(5, 10);
    //forward_list<int>::iterator it=auto it;
    for (forward_list<int>::iterator it = l3.begin(); it != l3.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}