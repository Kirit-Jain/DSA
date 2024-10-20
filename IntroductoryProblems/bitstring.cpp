//Problem set https://cses.fi/problemset/task/1617

#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007;

int main()
{
    long n;
    cin>>n;

    long ans = 1;
    for (long i = 0; i < n; i++)
    {
        ans = (ans*2)%mod;
    }

    cout<<ans<<endl;
    
}
