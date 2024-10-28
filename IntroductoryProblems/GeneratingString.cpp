//Problem Statement https://cses.fi/problemset/task/1622

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    string check = s;
    vector<string> st;
    st.push_back(s);
    while(true)
    {
        next_permutation(s.begin(), s.end());
        if(s==check)
            break;
        else
            st.push_back(s);
    }
    cout<<st.size()<<endl;
    for(auto x:st)
        cout<<x<<endl;
}