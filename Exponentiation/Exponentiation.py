mod = 10**9 + 7
 
def binpow(a, b, m):
    a %= m
    res = 1
    while b > 0:
        if b & 1:
            res = res * a % m
        a = a * a % m
        b >>= 1
    return res
 
test = int(input())
for _ in range(test):
    a, b = map(int, input().split())
    print(binpow(a, b, mod))
