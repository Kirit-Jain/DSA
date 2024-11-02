//Problem Statement https://cses.fi/problemset/task/2205

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long n; cin >> n;
    vector<string> gray;
    gray.push_back("0");
    gray.push_back("1");
    for(long i = 2; i<=n ; i++)
    {
        int size = gray.size();
        for(long j=size - 1; j >= 0 ; j--)
        {
            gray.push_back(gray[j]);
        }
        for(long m = 0; m<size; m++)
        {
            gray[m] = "0"+gray[m];
            gray[m+size] = "1" + gray[m+size];
        }
    }
    for(auto it:gray)
        cout<<it<<endl;
}

int main()
{
    solve();
}