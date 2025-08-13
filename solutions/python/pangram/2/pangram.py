def is_pangram(text):
	alphabet = set(map(chr, range(97, 123)))
	text = set(text.lower())
	return alphabet.issubset(text) # thanks /u/rpbeier