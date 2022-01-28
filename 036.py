def is_palindrome(n):
	return str(n) == str(n)[::-1] 

sum = 0

for i in range(1000000):
	if is_palindrome(i) and is_palindrome(bin(i)[2:]):
		sum += i

print(sum)

