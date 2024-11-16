//Problem Statement https://cses.fi/problemset/task/1640

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;long x;
    cin>>n>>x;
    vector<pair<long,int>> v;
    for(int i=0;i<n;i++)
    {
        long a;cin>>a;
        v.push_back({a, i});
    }
    sort(v.begin(), v.end());
    int l=0;
    int r=n-1;
    while(r>l)
    {
        long sum = v[r].first+v[l].first;
        if(sum==x)
        {
            cout<<v[l].second+1<<" "<<v[r].second+1<<endl;
            return 0;
        }
        else if(sum>x)
            r--;
        else if(sum<x)
            l++;
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}