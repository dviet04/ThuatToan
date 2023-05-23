#include<bits/stdc++.h>
using namespace std;

void Merge(int a[], int l, int m, int r)
{
	vector<int> x(a + l, a + m + 1);
	vector<int> y(a + m + 1, a + r + 1);
	int i = 0, j = 0;
	while(i < x.size() && j < y.size())
	{
		if(x[i] <= y[j])
		{
			a[l] = x[i];
			l++;
			i++;
		}
		else
		{
			a[l] = y[j];
			l++;
			j++;
		}
	}
	while(i < x.size())
	{
		a[l] = x[i];
		l++;
		i++;
	}
	while(j < y.size())
	{
		a[l] = y[j];
		l++;
		j++;
	}
}

void mergeS( int a[], int l, int r)
{
	if(l >= r)
	    return;
	int m = (l + r) / 2;
	mergeS(a, l, m);
	mergeS(a, m + 1, r);
	Merge(a, l, m, r);
}

int Find( int a[], int low, int high, int tmp)
{
	int vtri = 0;
	while( low <= high)
	{
		int mid = ( low + high) / 2;
		if( a[mid] <= tmp)
		{
			vtri = mid;
			low = mid + 1;
		}
		else
		    high = mid - 1;
	}
	return vtri ;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0) ; cout.tie(0);
	int n , m;
	cin>> n >> m;
	int a[n], b[m];
	for( int i = 0; i < n ; i++)
	    cin>> a[i];
	mergeS(a, 0, n - 1);
	for( int i = 0; i < m ; i++)
	    cin>> b[i];
	for( int i = 0; i < m ; i++)
	{
		cout<< Find( a, 0, n - 1, b[i] ) + 1<< endl;
	}
}