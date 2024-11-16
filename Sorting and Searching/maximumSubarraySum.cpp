//Problem Statement https://cses.fi/problemset/task/1643

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<long> v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    long sum=0; long maxSum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        if(sum>maxSum)
            maxSum=sum;
        if(sum<0)
            sum=0;
    }
    cout<<maxSum<<endl;

    return 0;
}