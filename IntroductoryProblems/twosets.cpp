//Problem Set https://cses.fi/problemset/task/1092

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    long sum = (n*(n+1))/2;
    string ans = "";
    
        vector<int> v1, v2;
    if(sum%2 == 0)
    {
        ans = "YES";
        if(n%4 == 0)
        {
            for(int i = 1; i<=n/4; i++)
                v1.push_back(i);
            for(int i = 0; i<n/4; i++)
                v1.push_back(n-i);
            for(int i = n/4 + 1; i<v1[v1.size() - 1]; i++)
                v2.push_back(i);
        }
        else if (n%4 == 3)
        {
            vector<int> v;
            ans = "YES";
            for(int i = 4; i<n+1; i++)
                v.push_back(i);
            v1.push_back(1);v1.push_back(2);
            v2.push_back(3);
            for(int i=0; i<(n-3)/4; i++)
            {
                v1.push_back(v[i]);
                v1.push_back(v[v.size()-i-1]);
            }
            for(int i=4+(n-3)/4; i<=n-(n-3)/4; i++)
                v2.push_back(i);
        }
        else
            ans = "NO";
        cout<<ans<<endl;
        cout<<v1.size()<<endl;
        for(int i = 0; i<v1.size(); i++)
            cout<<v1[i]<<" ";
        cout<<endl;
        cout<<v2.size()<<endl;
        for(int i = 0; i<v2.size(); i++)
            cout<<v2[i]<<" ";
    }
    else
    {
        ans = "NO";
        cout<<ans<<endl;
    }
    
    
}