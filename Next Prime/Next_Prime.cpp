#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
#define u64 uint64_t
#define u128 __uint128_t
 
//const int mod = 1000000007;
//const int lim = 1e7;
 
u128 mulmod(u64 a, u64 b, u64 m)
{
    u128 ans = 0;
    a %= m;
    while(b)
    {
        if(b & 1)
        {
            ans = (ans + a) % m;
        }
        a = (2 * a) % m;
        b >>= 1;
    }
    return ans;
}
 
u64 binpow(u64 a, u64 b, u64 m)
{
    a %= m;
    u64 ans = 1;
    while(b)
    {
        if(b & 1)
        {
            ans = (u128)mulmod(ans, a, m);
        }
        a = (u128)mulmod(a, a, m);
        b >>= 1;
    }
    return ans;
}
 
bool composite(u64 n, u64 a, u64 d, int r)
{
    u64 x = binpow(a, d, n);
    if(x == 1 or x == n - 1)
    {
        return false;
    }
    int i;
    for(i = 1; i < r; i++)
    {
        x = (u128)mulmod(x, x, n);
        if(x == n - 1)
        {
            return false;
        }
    }
    return true;
}
 
bool isprime(u64 n)
{
    if(n < 2)
    {
        return false;
    }
    int r = 0;
    u64 d = n - 1;
    while((d & 1) == 0)
    {
        d >>= 1;
        r++;
    }
    for(u64 a: {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37})
    {
        if(n == a)
        {
            return true;
        }
        if(composite(n, a, d, r))
        {
            return false;
        }
    }
    return true;
}
 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        n++;
        while(!isprime(n))
        {
            n++;
        }
        cout << n << endl;
    }
