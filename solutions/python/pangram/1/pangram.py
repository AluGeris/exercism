def is_pangram(text):
	alphabet = set(map(chr, range(97, 123)))
	text = set(text.lower())
	punctuation = text.difference(alphabet)
	text = text.symmetric_difference(punctuation)
	return len(alphabet.difference(text)) == 0