
#include<bits/stdc++.h>
using namespace std;

int n;
int Chua[12], Cay[12], danhDau[12];
int doChua, doCay;
int KQ = 999999999;

void Nhap()
{
    for(int i = 1; i <= n; i++)
        cin>> Chua[i] >> Cay[i];
    return;
}

int check()
{
    for(int i = 1; i <= n; i++)
    {
        if(danhDau[i] == 1)
            return 1;
    }
    return 0;
}

void ChenhLech()
{
    doChua = 1, doCay = 0;
    for(int i = 1; i <= n; i++)
    {
        if(danhDau[i] == 1)
        {
            doChua *= Chua[i];
            doCay += Cay[i];
        }
    }
    KQ = min(KQ, abs(doChua - doCay));
}

void Try(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        danhDau[i] = j;
        if(i == n)
        {
            if(check() == 1)
                ChenhLech();
        }
        else
            Try(i + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0) ; cout.tie(0);
    cin>> n;
    Nhap();
    Try(1);
    cout<< KQ;
}
