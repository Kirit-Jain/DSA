//Problem Statement https://cses.fi/problemset/task/1619

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<pair<int, int>> c_time;
    for(int i=0;i<n;i++)
    {
        int first, second;
        cin>> first >> second;
        c_time.push_back({first, 1});
        c_time.push_back({second, -1});
    }
    sort(c_time.begin(), c_time.end());
    int actual_customers = 0, max_customers = 0;
    for(int i=0;i<c_time.size();i++)
    {
        actual_customers+=c_time[i].second;
        max_customers=max(max_customers, actual_customers);
    }
    cout<< max_customers <<endl;
}