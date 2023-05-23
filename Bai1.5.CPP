#include<bits/stdc++.h>
using namespace std;

int d;
double CS[12];
double l = -1000000, r = 1000000;

double KQ( double m)
{
    double kq = 0;
    for( int i = 0; i <= d; i++)
        kq += pow(m, i) * CS[i];
    return kq;
}

double Find( )
{
    while(l <= r)
    {
        double m = (l + r) / 2;
        if( KQ(m + 0.0001) * KQ(m - 0.0001) < 0)
            return m;
        else
        if(KQ(m + 0.0001) <= 0)
            l = m + 0.0001;
        else
            r = m - 0.0001;
    }
    return 1;
}
int main()
{
    cin>> d;
    for( int i = 0; i <= d; i++)
        cin>> CS[i];
    cout<< (int) (Find() * 1000);
}