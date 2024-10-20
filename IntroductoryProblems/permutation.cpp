//Problem Statement https://cses.fi/problemset/task/1070

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin>>n;

    if(n == 1)
    {
        cout << n;
    }
    else if(n < 4)
    {
        cout<<"NO SOLUTION";
    }
    else
    {
        for (long i = 2; i <= n; i+=2)
        {
            cout<<i<<" ";
        }
        
        for (long i = 1; i <= n; i+=2)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}