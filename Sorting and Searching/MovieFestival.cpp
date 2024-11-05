//Problem Statement https://cses.fi/problemset/task/1629

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<pair<long, long>>m_time(n);

    for(int i=0;i<n;i++)
    {
        cin>> m_time[i].first >> m_time[i].second;
    }
    sort(m_time.begin(), m_time.end());
    int ans = 0;
    long current = 0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            current = m_time[i].second;
            ans++;
        }
        else
        {
            if(m_time[i].first>=current)
            {
                current = m_time[i].second;
                ans++;
            }
            else
            {
                current = min(current, m_time[i].second);
            }
        }
    }
    cout<< ans << endl;
}