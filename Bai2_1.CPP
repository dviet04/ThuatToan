#include<bits/stdc++.h>
using namespace std;
string s[100000];
int main()
{
	int n;
	cin>> n;
	s[1] = "0";
	s[2] = "1";
	long long l = pow(2, n);
	if( n > 1)
	{
		int vtr = 2;
		for( int i = 2; i <= n; i++)
		{
			long long k = pow(2, i);
			for( int j = 1; j <= vtr; j++)
			{
				s[vtr + j] = "1" + s[j];
				s[j] = "0" + s[j];
			}
			vtr = k;
		}
	}
	for( int i = 1; i <= l ; i++)
	    cout<< s[i] << endl;
} 