s, n, m = map(int, input().split())
s1 = s // n
s2 = s // (n - m)
print(s1 + s2)
