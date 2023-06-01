#include<bits/stdc++.h>
using namespace std;

int GiaiThua(int n)
{
    if(n == 1)
        return 1;
    return n * GiaiThua(n - 1);
}
int main()
{
    int soTest;
    cin>> soTest;
    while(soTest--)
    {
        int n;
        cin>> n;
        cout<< GiaiThua(n) << endl;
    }
}