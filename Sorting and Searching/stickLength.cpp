//Problem Statement https://cses.fi/problemset/task/1074

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<long> v;
    for(int i=0;i<n;i++)
    {
        int temp;cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int ref = n/2;
    long mincost=0;
    for(int i=0;i<n;i++)
    {
        long cost=abs(v[ref]-v[i]);
        mincost+=cost;
    }
    cout<<mincost<<endl;
}