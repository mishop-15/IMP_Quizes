def digit_sum(n):
    if n < 10:
        return n * (n + 1) // 2
    d = len(str(n))
    pows = [0] * (d + 1)
    pows[0] = 0
    pows[1] = 45
    for i in range(2, d + 1):
        pows[i] = pows[i - 1] * 10 + 45 * (10 ** (i - 1))
    total = 0
    for i in range(d - 1, -1, -1):
        q = n // 10
        r = n % 10
        total += q * pows[i]
        total += (r * (r + 1) // 2) * (10 ** i)
        total += r * (q * (10 ** i))
        n = q
    return total

n = int(input())
print(digit_sum(n))
