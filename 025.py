nums = [1, 1]

def next_fib():
	nums.append(nums[-2] + nums[-1])

while nums[-1] < 10**999:
	next_fib()

print(len(nums))
