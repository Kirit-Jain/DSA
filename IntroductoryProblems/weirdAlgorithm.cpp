//Problem Statement https://cses.fi/problemset/task/1068

#include<iostream>
using namespace std;

int main()
{
    long n;
    
    cin>>n;
    if(n>=1 && n<=1000000)
    {
        cout<<n<<" ";
        while(n != 1)
        {
            if(n%2 != 0)
            {
                n = n*3 + 1;
                cout<<n<<" ";
            }
            else
            {
                n=n/2;
                cout<<n<<" ";
            }
        }
    }
}