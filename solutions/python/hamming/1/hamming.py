def distance(strand1, strand2):
	return len([strand1[i] for i in range(len(strand1)) if strand1[i] != strand2[i]])