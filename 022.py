with open("p022_names.txt") as file:
	names = file.read()
	names = sorted(names.split(","))
	letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	total_score = 0
	for i in range(len(names)):
		letter_sum = 0
		for c in names[i]:
			letter_sum += letters.find(c) + 1
		total_score += letter_sum*(i+1)
		print(str(i) + " | " + names[i]+ " | " + str(letter_sum))
	print(total_score)
