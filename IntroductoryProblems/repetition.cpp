//Problem staement https://cses.fi/problemset/task/1069

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    long n = s.length();
    long ans = 1, size = 1;
    for (long i = 0; i < n-1; i++)
    {
        if(s[i]==s[i+1])
            size++;
        else
            size = 1;
        ans = max(ans, size);
    }
    
    cout<<ans;
}