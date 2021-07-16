//clear()
//empty()
//revrse()->it revrse the list.
//merge()->it merges the two list in sorted order.
//sort()->it sorted the list
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int> l1{15, 20, 30};
    auto it = l1.insert_after(l1.begin(), 10);
    it = l1.insert_after(it, {10, 40, 50});
    it = l1.emplace_after(it, 40);
    it = l1.erase_after(it);
    for (auto x : l1)
    {
        cout << x << " ";
    }

    return 0;
}