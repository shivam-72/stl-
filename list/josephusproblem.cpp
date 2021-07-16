#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int getsurv(int n, int k)
{
    list<int> l1;
    for (int i = 0; i < n; i++)
    {
        l1.push_back(i);
    }
    auto it = l1.begin();
    while (l1.size() > 1)
    {
        for (int count = 1; count < k; count++)
        {
            it++;
            if (it == l1.end())
            {
                it = l1.begin();
            }
        }
        it = l1.erase(it);
        if (it == l1.end())
        {
            it = l1.begin();
        }
        
    }
    return *l1.begin();//l1.front() it gives first element of list
}
    int main()
    {
       cout<<getsurv(14,2);
        return 0;
    }