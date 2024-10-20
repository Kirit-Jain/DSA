//Problem statement https://cses.fi/problemset/task/1071

#include<iostream>
using namespace std;

int main()
{
    long t;
    cin>>t;

    while(t--)
    {
        long long x, y;
        cin >> y >> x;
        if(x>=y)
        {
            long long ans = 0;
            if(x%2!=0)
                ans = ((x*x)) - y + 1;
            else
                ans = ((x-1)*(x-1)) + y;
            cout<<ans<<endl;
        }
        else
        {
            long ans = 0;
            if(y%2!=0)
                ans = ((y-1)*(y-1)) + x;
            else
                ans = ((y*y)) - x + 1;
            cout<<ans<<endl;
        }
    }
}