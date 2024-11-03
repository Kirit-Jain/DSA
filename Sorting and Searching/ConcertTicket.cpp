//Problem Statement https://cses.fi/problemset/task/1091

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n;
    cin>>m;
    multiset<long> ticket_price;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        ticket_price.insert(x);
    }
    for(int i=0;i<m;i++)
    {
        long max_price;
        cin>>max_price;

        auto it = ticket_price.upper_bound(max_price);
        if(it == ticket_price.begin())
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            cout<< *(--it) << endl;
            ticket_price.erase(it);
        }
    }
}