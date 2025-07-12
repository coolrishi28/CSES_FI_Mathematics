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
    int test, a, b, c;
    cin >> test;
    while(test--)
    {
        cin >> a >> b >> c;
        int p = binpow(b, c, mod - 1);
        if(a == 0 and p == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << binpow(a, p, mod) << endl;
        }
    }
}
