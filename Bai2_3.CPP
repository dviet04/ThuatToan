#include<bits/stdc++.h>
using namespace std;

int n;
// int *chenhLech = new int[1000000000] (0);
int giaVi[2][10];

// int GiaVi()
// {
//     for(int i = 0; i < n; i++)
// }

int main()
{
    cin>> n;
    for(int j = 0; j < n; j++)
    {
        for( int i = 0; i < 2; i++)
            cin>> giaVi[i][j];
    }
    for(int j = 0; j < n; j++)
    {
        for( int i = 0; i < 2; i++)
            cout<< giaVi[i][j] << " ";
        cout<< endl;
    }

}