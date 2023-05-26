
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0) ; cout.tie(0);
    int soTest;
    cin>> soTest;
    while(soTest--)
    {
        int n, m;
        cin>> n >> m;
        int a[100];
        for(int i = 0; i < n; i++)
            cin>> a[i];
        sort(a, a + n);
        int res = a[0] + a[1] + a[2];
        for (int i = 2; i < n; i++) 
        {
            int s = m - a[i];

            int j = i-1, k = 0;
            while (j > k) 
            {
                while (j > k && a[j]+a[k] > s) 
                    j--;
                while (j > k && a[j]+a[k] <= s) 
                {
                    res = max(res, a[i] + a[j] + a[k]);
                    k++;
                }       
            }
        }
        cout << res << endl;
    }
}