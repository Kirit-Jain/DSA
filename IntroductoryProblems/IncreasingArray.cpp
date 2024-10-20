//Problem statement https://cses.fi/problemset/task/1094

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long> v;
    long moves = 0;
    for (int i = 0; i < n; i++)
    {
        long a;
        cin>>a;
        v.push_back(a);
    }

    for (int i = 1; i < n; i++)
    {
        if(v[i-1]>v[i])
        {
            moves += v[i-1]-v[i];
            v[i] = v[i-1];
        }
    }
    cout<< moves << endl;
    
    return 0;
}