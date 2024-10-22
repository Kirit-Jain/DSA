//Problem statement https://cses.fi/problemset/task/1754

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
    long a, b;
    cin>> a >> b;
    if(a>b)
        swap(a, b);
    string ans = "";
    if(a*2<b)
        ans = "NO";
    else
    {
        a%=3;
        b%=3;
        if(a>b) swap(a, b);
        if((a==0 && b==0) or (a==1 && b==2))
        {
            ans="YES";
        }
        else ans = "NO";
    }
    cout<< ans << endl;
    }
}