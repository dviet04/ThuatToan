#include<bits/stdc++.h>
using namespace std;
 
int n, m;
int x;
int KQ = 0;
vector<int> S;
 
int Find(int a[], int l, int r)
{
    int vtr = 0;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] <= x)
        {
            vtr = m;
            l = m + 1;
        }
        else
            r = m - 1;
    }
    return vtr;
}
 
int KiemTra(int a[])
{
    for( int i = 0; i < n - 2; i++)
    {
        for( int j = n - 1; j > i + 1; j--)
        {
            x = m - a[i] - a[j];
            KQ = max(KQ, a[Find(a, i + 1, j - 1)] + a[i] + a[j] ); 
            if(KQ == m)
                return m;        
        }
    }
    return KQ;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0) ; cout.tie(0);
    int a[10001];
    cin>> n >> m;
    for( int i = 0; i < n; i++)
        cin>> a[i];
    sort(a, a + n);
    cout<< KiemTra(a) << endl;
}