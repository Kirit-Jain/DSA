//Problem Statement https://cses.fi/problemset/task/1621

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    set<long> v;
    for(int i=0;i<n;i++)
    {
        long a; cin>>a;
        v.insert(a);
    }

    cout<<v.size()<<endl;
}