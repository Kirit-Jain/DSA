//Problem Statement https://cses.fi/problemset/task/2216

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<pair<int, int>> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i].first;
        v[i].second = i+1;
    }

    int round=1;
    int temp = -1;

    sort(v.begin(), v.end());

    for(int i=0;i<n;i++)
    {
        if(v[i].second<temp)
        {
            round++;
        }
        temp = v[i].second;
    }


    cout<<round<<endl;
}