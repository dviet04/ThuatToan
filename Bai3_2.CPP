#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin>> n;
    long long f0 = 0, f1 = 1;
    if(n == 0)
        cout<< 0;
    else
    if(n == 1)
        cout<< 1;
    else
    {
        for(int i = 2; i <= n; i++)
        {
            int tmp = f1 % 1000000007;
            f1 = (f1 + f0) % 1000000007;
            f0 = tmp;
        }
        cout<< f1;
    }
}