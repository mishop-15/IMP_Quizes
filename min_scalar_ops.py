def matrices(p):
    n = len(p) - 1
    m = [[0] * (n + 1) for _ in range(n + 1)]
    for x in range(2, n + 1):
        for i in range(1, n - x + 2):
            j = i + x - 1
            m[i][j] = float('inf')
            for k in range(i, j):
                q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] 
                if q < m[i][j]:
                    m[i][j] = q
    return m[1][n]

n = int(input())
p = list(map(int, input().split()))
print(matrices(p))
