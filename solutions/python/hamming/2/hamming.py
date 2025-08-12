def distance(strand1, strand2):
	return sum([strand1[i] != strand2[i] for i in range(len(strand1))])
	# Thanks for sum, Alex-Mussell