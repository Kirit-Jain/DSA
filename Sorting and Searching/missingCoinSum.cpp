//Problem Statement https://cses.fi/problemset/task/2183

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<long> v(n);
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }

    sort(v.begin(), v.end());
    long missing_sum = 1;
    for(int i=0;i<n;i++)
    {
        if(v[i]>missing_sum)
            break;
        
        missing_sum+=v[i];
    }

    cout<<missing_sum<<endl;
}