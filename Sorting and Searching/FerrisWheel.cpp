//Problem Statement https://cses.fi/problemset/task/1090

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    long x;cin>>x;
    vector<long> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int count=0;
    int i=0;
    int second = n-1;
    while(i<=second)
    {
        if((v[i]+v[second])<=x)
        {
            i++;
        }
        second--;
        count++;
    }
    cout<<count<<endl;
}