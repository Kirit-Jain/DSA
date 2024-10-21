//problem Statement https://cses.fi/problemset/task/1618/

#include<bits/stdc++.h>
using namespace std;

int countTrailingZeros(long n)
{
    long count = 0;
    for (long i = 5; n / i >= 1; i *= 5)
    {
        count += n / i;
    }
    return count;
}

int main()
{
    long n;
    cin >> n;

    int count = countTrailingZeros(n);
    cout << count;
}
