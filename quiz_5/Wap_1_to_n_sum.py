n = int(input())
sum_digits = 0
for i in range(1, n + 1):
 num_str = str(i)
 sum_digits += sum(int(digit) for digit in num_str)
print(sum_digits)
