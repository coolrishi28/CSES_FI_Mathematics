#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
const int mod = 1000000007;
 
ll binpow(ll a, ll b, ll m)
{
    a %= m;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = res * a % m;
        }
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
 
signed main()
{
    int test, a, b;
    cin >> test;
    while(test--)
    {
        cin >> a >> b;
        cout << binpow(a, b, mod) << endl;
    }
}
