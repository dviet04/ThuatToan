#include<bits/stdc++.h>
using namespace std;

void quickS(int a[], int l, int r)
{
	int i = l, j = r;
	int tmp;
	int p = a[(l + r) / 2];

	while( i <= j)
	{
		while( a[i] < p)
		    i++;
		while( a[j] > p)
		    j--;
		if( i <= j)
		{
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			i++;
			j--;
		}
	}
	if(l < j)
	    quickS( a, l, j);
	if(i < r)
	    quickS( a, i , r);
	return;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0) ; cout.tie(0);
	int n, k;
	cin>> n >> k;
	int a[n];
	for( int i = 0; i < n; i++)
		cin>> a[i];
	quickS(a, 1, n - 1);
	long long S = a[0];
	for( int i = 1; i <= n - k - 1; i++)
	    S -= a[i];
	for( int i = n - k ; i < n; i++)
	    S += a[i];
	cout<< S;  
}