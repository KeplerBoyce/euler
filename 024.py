permutations = []

def addNextDigit(string, nums_left):
	if len(nums_left) == 0:
		permutations.append(string)
		print("added " + string)
		return
	for n in nums_left:
		nl = nums_left.copy()
		nl.remove(n)
		addNextDigit(string + n, nl)

addNextDigit("", [str(n) for n in range(10)])

permutations = [int(n) for n in permutations]
print(permutations[999999])
