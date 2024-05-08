a,b,r = map(int, input.split())
result = float('inf')
for i in range(r+1):
    a_xor = a ^ i
    b_xor = b ^ i
    diff = abs(a_xor-b_xor)
    result = min(diff,result)

print(result)
