#include<bits/stdc++.h>
using namespace std;

long long LuyThua(long long a, long long b)
{
    if(b == 0)
        return 1;
    long long t = LuyThua(a, b / 2) % 1000000007;
    if(b % 2 == 0)
        return t * t % 1000000007;
    else
        return (((a * t) % 1000000007) * t) % 1000000007;
}

int main()
{
    long long a, b;
    while((a != 0) || (b != 0))
    {
        cin>> a >> b;
        if((a == 0) && (b == 0))
            break;
        cout<< LuyThua(a, b) << endl;
    }
}