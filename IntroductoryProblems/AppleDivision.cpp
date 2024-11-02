//Problem Statement https://cses.fi/problemset/task/1623

#include<bits/stdc++.h>
using namespace std;

long long AppleDivision(vector<long long> &v, int n, long long sum_g1, long long sum_g2)
{
    if(n==0)
    {
        long long r1 = sum_g1 + v[0];
        long long r2 = sum_g2 + v[0];
        long long ans = min(abs(r1-sum_g2), abs(r2-sum_g1));
        return ans;
    }

    long long temp1 = AppleDivision(v, n-1, sum_g1+v[n], sum_g2);
    long long temp2 = AppleDivision(v, n-1, sum_g1, sum_g2+v[n]);

    return min(temp1, temp2);
}

int main()
{
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i = 0; i<n ; i++)
    {
        cin>>v[i];
    }

    cout<<AppleDivision(v, n-1, 0, 0);
}