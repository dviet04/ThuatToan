#include<bits/stdc++.h>
using namespace std;

int c, n;
int KL[16];
int dp[5001] = {};

int QuyHoach ()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = c; j >= KL[i]; j--)
        {
            if(dp[j - KL[i]] == 1)
                dp[j] = 1;       
        }
    }
    int ind = c;
    while(dp[ind] == 0)
        ind--;
    return ind;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0) ; cout.tie(0);
    cin>> c >> n;
    dp[0] = 1;
    for(int i = 0; i < n; i++)
        cin>> KL[i];
    cout<< QuyHoach();
}
