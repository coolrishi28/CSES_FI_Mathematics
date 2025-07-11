mod = 10**9 + 7
lim = 10**6 + 1
 
divs = [0] * lim
for i in range(1, lim):
    for j in range(i, lim, i):
        divs[j] += 1
 
test = int(input())
for _ in range(test):
    n = int(input())
    print(divs[n])
