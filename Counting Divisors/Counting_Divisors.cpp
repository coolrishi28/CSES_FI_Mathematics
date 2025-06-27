#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
const int mod = 1000000007;
const int lim = 1e6 + 1;
int divs[lim];
 
signed main()
{
	int test, n, i, j;
	cin >> test;
	for(i = 1; i < lim; i++)
	{
	    for(j = i; j < lim; j += i)
	    {
	        divs[j]++;
	    }
	}
	
	while(test--)
	{
		cin >> n;
		cout << divs[n] << endl;
	}
