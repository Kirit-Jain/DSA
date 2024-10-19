//Problem Statement https://cses.fi/problemset/task/1083/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin>>n;
    vector<long> v;
    for(long i = 0; i<n-1 ;i++)
    {
        long a;
        cin>>a;
        v.push_back(a);
    }

    long total;
    long sum = 0;
    total = (n*(n+1))/2;
    for(long i = 0; i < n-1; i++)
    {
        sum = sum + v[i];
    }

    long out = total - sum;

    cout<<out;
}