n = int(input())
a = list(range(n + 1))
a[1] = 0
lst = []
sums = set()
i = 2
while i <= n:
    if a[i] != 0:
        lst.append(a[i])
        for j in range(i, n+1, i):
            a[j] = 0
    i += 1
for i in lst:
    for x in range(i // 2):
        sums.add((x, i - x))

print(len(sums), *sums, sep='\n')
