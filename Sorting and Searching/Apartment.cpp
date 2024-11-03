//Problem Statement https://cses.fi/problemset/task/1084

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; cin>> n >> m;
    long k; cin>>k;
    vector<long> a(n), b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int count = 0;
    long diff;
    int first=0, second=0;
    while(first<n && second<m)
    {
        if(abs(a[first]-b[second])<=k)
        {
            count++;
            first++;
            second++;
        }
        else if(abs(a[first]>b[second]))
            second++;
        else
            first++;
    }
    
    cout<<count<<endl;
}