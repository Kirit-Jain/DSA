//Problem Statement https://cses.fi/problemset/task/2165

#include<bits/stdc++.h>
using namespace std;

void TowerOfHanoi(int n, int A, int B, int C)
{
    if(n==0) return;

    TowerOfHanoi(n-1, A, C, B);
    cout<<A<<" "<<B<<endl;
    TowerOfHanoi(n-1, C, B, A);
}

int main()
{
    int n;
    cin>>n;
    int moves = pow(2, n)-1;
    cout<<moves<<endl;
    TowerOfHanoi(n, 1, 3, 2);
    return 0;
}